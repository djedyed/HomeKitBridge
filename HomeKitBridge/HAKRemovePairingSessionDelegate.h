//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKPairingSessionDelegate.h"

@class HAKRemovePairingSession, NSString;

@protocol HAKRemovePairingSessionDelegate <HAKPairingSessionDelegate>
- (BOOL)removePairingSession:(HAKRemovePairingSession *)arg1 removePairingForIdentifier:(NSString *)arg2;
- (BOOL)controllerIsAdminForRemovePairingSession:(HAKRemovePairingSession *)arg1;
@end

