//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver.h"

@class NSCountedSet, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    _Bool _overridePercent;
    _Bool _killActivity;
    _Bool _itemIsDisabled[41];
    _Bool _itemWasDisabled[41];
    NSCountedSet *_itemDisabledRequests[41];
    _Bool _timeEnabled;
    _Bool _statusBarTimeRequiresUpdate;
    _Bool _timeCloaked;
    _Bool _allButBatteryCloaked;
    _Bool _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_1916f467 *)arg2 withActions:(int)arg3;
- (void)_composePostDataFromAggregatorData:(CDStruct_1916f467 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_1916f467 *)arg3 lastPost:(const CDStruct_1916f467 *)arg4;
- (void)forceUpdateLocalStatusBarData;
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;
- (void)setTimeCloaked:(_Bool)arg1;
- (void)_enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3 immediately:(_Bool)arg4;
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (void)enableTime:(_Bool)arg1;
- (void)updateTimeEnabledImmediately:(_Bool)arg1;
- (void)updateTimeEnabled;
- (_Bool)isTimeEnabled;
- (void)_updateDisabledItems;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

