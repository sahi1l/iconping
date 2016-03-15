//
//  iconpingAppDelegate.h
//  iconping
//
//  Created by Salvatore Sanfilippo on 25/07/11.
//  Copyright 2011 Salvatore Sanfilippo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface iconpingAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    NSStatusItem *myStatusItem;
    NSImage *myStatusImageOK, *myStatusImageSLOW, *myStatusImageKO;
    NSMenu *myMenu;
    NSMenuItem *statusMenuItem, *timingMenuItem, *openAtStartupMenuItem;
    uint16_t icmp_id;
    uint16_t icmp_seq;
    int64_t last_received_time;
    int last_rtt;
    int icmp_socket;
    int connection_state;
    int64_t lasttime;
}

- (void) changeConnectionState: (int) state;
- (void) myUpdateTime;
- (BOOL)loginItemExists;
- (BOOL)toggleLoginItem;

@property (assign) IBOutlet NSWindow *window;
@end

int setSocketNonBlocking(int fd);
int64_t ustime(void);
