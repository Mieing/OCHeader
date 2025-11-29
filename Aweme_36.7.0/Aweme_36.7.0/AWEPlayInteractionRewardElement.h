@class NSNumber, NSString, AWEMarkView;

@interface AWEPlayInteractionRewardElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEMarkView *rewardView;
@property (retain, nonatomic) NSNumber *showTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldShowRewardViewWithModel:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (BOOL)shouldShowRewardView:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)updateRewardView:(id)a0;
- (void)onRewardViewClicked:(id)a0;
- (void)changeRewardViewAppearStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
