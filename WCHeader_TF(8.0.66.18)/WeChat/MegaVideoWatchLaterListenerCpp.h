@class NSString;

@interface MegaVideoWatchLaterListenerCpp : UnitRCObjcBaseProxyClass <MegaVideoWatchLaterListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFeedWatchLaterStatusChanged:(id)a0 action:(int)a1;

@end
