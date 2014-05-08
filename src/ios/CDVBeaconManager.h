#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface CDVBeaconManager : CDVPlugin

- (void) startMonitoring:(CDVInvokedUrlCommand*)command;
- (void) currentBeacon:(CDVInvokedUrlCommand*)command

@end