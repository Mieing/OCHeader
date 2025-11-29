@class UIControl, NSString, UIImageView, UILabel, UIView;

@interface AFDPureModePageAlbumResetScaleController : AWEBaseController <AFDPureModePageControllerProtocol>

@property (retain, nonatomic) UIControl *resetContainer;
@property (retain, nonatomic) UIImageView *arrowCircleIcon;
@property (retain, nonatomic) UILabel *resetLabel;
@property (retain, nonatomic) UIView *interacionContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transformTargetViewToOriginScale;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupContext;

@end
