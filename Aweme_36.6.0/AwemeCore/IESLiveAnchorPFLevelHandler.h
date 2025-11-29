@class NSString;

@interface IESLiveAnchorPFLevelHandler : IESLiveAnchorPFBaseHandler <IESLiveAnchorPFStateObserver>

@property (nonatomic) long long currentLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)microphoneStateDidChange:(long long)a0;
- (void)temperatureStateDidChange:(long long)a0;
- (void)stallStateDidChange:(long long)a0;
- (void)initializeParams;
- (void)updateLevelIfNeeded;
- (long long)computeLevel;
- (void)compareLevelWithOldLevel:(long long)a0 newLevel:(long long)a1;
- (void)levelWillChangeFrom:(long long)a0 to:(long long)a1;
- (BOOL)isPoorLevel;
- (BOOL)isNormalLevel;
- (void)initializeLevel;
- (void)networkStateDidChange:(long long)a0;
- (void)didLoad;

@end
