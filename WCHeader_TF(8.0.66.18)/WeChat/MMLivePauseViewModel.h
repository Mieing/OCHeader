@class NSString, MMFinderLiveLogic, FinderLiveLayerAnchorVerificationShowInfo, MMFinderLiveTask;
@protocol MMLivePauseViewModelDelegate;

@interface MMLivePauseViewModel : NSObject

@property (weak, nonatomic) MMFinderLiveLogic *finderLiveLogic;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) long long requestedVerifyPausedLiveScene;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *contentStr;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonCountdownTitle;
@property (copy, nonatomic) NSString *defaultSubDescStr;
@property (copy, nonatomic) NSString *remoteSubDescStr;
@property (nonatomic) long long countdown;
@property (nonatomic) unsigned int verifyTotalTime;
@property (nonatomic) unsigned int verifyButtonColdingTime;
@property (nonatomic) unsigned int showSubDescTime;
@property (copy, nonatomic) NSString *verifyCountdownWording;
@property (retain, nonatomic) FinderLiveLayerAnchorVerificationShowInfo *verificationShowInfo;
@property (nonatomic) BOOL showsAccumulatedTime;
@property (nonatomic) BOOL showContentLabel;
@property (nonatomic) BOOL showsResumeButton;
@property (nonatomic) BOOL showsSubDesc;
@property (nonatomic) BOOL removeBlurView;
@property (nonatomic) unsigned int type;
@property (weak, nonatomic) id<MMLivePauseViewModelDelegate> delegate;

- (id)initWithLogic:(id)a0 verificationShowInfo:(id)a1;
- (void)updateWithPauseType:(unsigned long long)a0;
- (void)updateResumeBtnEnable:(BOOL)a0;
- (void)stopPauseTimer;
- (void)onResumeForAnchorVerifyWithTimeoutPaused;
- (void)onResumeForAnchorVerifyWithCaptchaPaused;
- (void)onResumeForAnchorVerifyWithTimeoutAndLimitPaused;
- (void)onResumeForAnchorVerifyLimitedPaused;
- (void)onResumeForAnchorVerifyForceWaitStylePaused;
- (void)onAnchorVerifyTimeoutPausedTimeout;
- (void)onAnchorVerifyWithCaptchaPausedTimeout;
- (void)onAnchorVerifyWithTimeoutAndLimitPausedTimeout;
- (void)onAnchorVerifyForceWaitStyleTimeout;
- (id)anchorStatusItem;
- (id)description;
- (void).cxx_destruct;

@end
