@class NSString;

@interface AWEPlayInteractionBatManService : HTSService <AWEPlayInteractionBatManService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBatManEnterenceIfNeeded:(id)a0 videoEnterFrom:(id)a1 model:(id)a2 viewController:(id)a3 delegete:(id)a4 addTracker:(BOOL)a5;
- (void)clearEntranceWithAweme:(id)a0;
- (void)stopShow;
- (void)disableBatManTimerWithModel:(id)a0;
- (BOOL)isShowingBatMan;
- (BOOL)isBatManURLString:(id)a0;

@end
