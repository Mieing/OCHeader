@class AWEButton, NSString;

@interface AWEPlayInteractionAdmireRewardLeftElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (class, nonatomic) long long nowDisplayCount;
@property (class, nonatomic) long long lastDisplayTimestamp;

@property (retain, nonatomic) AWEButton *rewardButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addDisplayCountToday;
+ (BOOL)isOutLimitPerDay;
+ (BOOL)shouldShowByFrequencyControl;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)tryOpenRewardLynxboard;
- (BOOL)shouldShowAdmireRewardBottomButton;
- (BOOL)enableReward;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
