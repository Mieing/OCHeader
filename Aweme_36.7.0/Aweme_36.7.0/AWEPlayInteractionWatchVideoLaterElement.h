@class UIControl, NSString, UIView, UILabel;

@interface AWEPlayInteractionWatchVideoLaterElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIControl *bgView;
@property (retain, nonatomic) UIView *bgSubView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)watchVideoLaterBizSceneEnableWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)handleWatchLaterInfoChangeNotification:(id)a0;
- (BOOL)watchVideoLaterBizSceneEnable;
- (id)mvchannelRevisitVideoConfig;
- (void)trackElementShow;
- (void).cxx_destruct;
- (void)onTapAction;
- (void)viewDidLoad;

@end
