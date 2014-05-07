#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface CDVBeaconManger : CDVPlugin

- (void) startMonitoring:(CDVInvokedUrlCommand*)command;

@end