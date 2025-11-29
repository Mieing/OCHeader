@class NSString;

@interface MegaVideoMinimizeServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoMinimizeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hasMinimize;
- (void)onMinimizeActive:(id)a0;
- (void)onMinimizeDeactive;
- (id)minimizeContext;
- (void)updateCurrentPlayerId:(long long)a0;
- (long long)currentPlayerId;
- (void)setPlayerDetailModel:(id)a0;
- (id)playerDetailModel;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;

@end
