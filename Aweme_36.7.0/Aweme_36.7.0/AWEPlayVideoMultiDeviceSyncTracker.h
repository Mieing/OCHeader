@interface AWEPlayVideoMultiDeviceSyncTracker : AWEPlayVideoBaseTracker

@property (nonatomic) BOOL hasPushed;

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (void)receiveContinueEvent:(id)a0;
- (id)init;
- (void)dealloc;

@end
