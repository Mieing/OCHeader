@class NSString, NSDictionary, AWEAwemeModel, UILabel, UIView;

@interface AWEPlayInteractionAdGuideTagElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) AWEAwemeModel *lastShowedModel;
@property (retain, nonatomic) NSDictionary *currentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)tryShowAdGuideTagWithNotification:(id)a0;
- (void)videoShowAdTagTimerWithNotification:(id)a0;
- (void)videoHideAdTagTimerWithNotification:(id)a0;
- (void)setupSubViewWithText:(id)a0;
- (void)tryShowAdGuideTag;
- (void).cxx_destruct;
- (void)clearData;
- (void)viewDidLoad;
- (void)dealloc;

@end
