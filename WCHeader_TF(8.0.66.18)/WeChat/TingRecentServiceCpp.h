@class NSString;

@interface TingRecentServiceCpp : UnitRCObjcBaseProxyClass <TingRecentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addListener:(id)a0;
- (BOOL)removeAllListener;
- (void)clearRecent;
- (void)dispatchRecentTape:(id)a0;
- (void)checkSwitchPlayTask:(int)a0 scene:(int)a1;

@end
