//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VOIPModeSwitchStateMachine : NSObject
{
    int _status;
}

@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (int)doAction:(int)arg1;
- (void)ChangeStatus:(int)arg1;
- (void)resetStatus;
- (id)initWithStatus:(int)arg1;
- (id)init;

@end

