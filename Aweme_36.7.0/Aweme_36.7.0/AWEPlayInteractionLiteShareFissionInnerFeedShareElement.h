@class DUXBaseLabel, NSString, UIView, DUXBaseImageView, AWEFeedVideoButton;

@interface AWEPlayInteractionLiteShareFissionInnerFeedShareElement : AWEPlayInteractionRightElement <AWELiteShareFissionInnerFeedMessage>

@property (retain, nonatomic) DUXBaseImageView *redpacketIconView;
@property (retain, nonatomic) DUXBaseImageView *shareIconView;
@property (retain, nonatomic) AWEFeedVideoButton *shareFissionButton;
@property (retain, nonatomic) UIView *rewardInfoBgView;
@property (retain, nonatomic) DUXBaseLabel *rewardInfoLabel;
@property (nonatomic) BOOL isShareFissionStyle;
@property (nonatomic) BOOL hasSetupShareFissionStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteShareFissionInnerFeedDOUYINLiteAdapterClass;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)showStringFromNumber:(id)a0;
- (id)aAWELiteShareFissionInnerFeedDOUYINLiteAdapter;
- (void)updateShareElementRewardInfo:(BOOL)a0 shareAmount:(long long)a1 taskStatus:(long long)a2 statusCode:(long long)a3 rewardText:(id)a4;
- (void)setupDefaultUI;
- (void)addRepeatImageSwitchAnimation;
- (void)setupShareFissionInnerFeedUI;
- (void)onShareFissionButtonClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
