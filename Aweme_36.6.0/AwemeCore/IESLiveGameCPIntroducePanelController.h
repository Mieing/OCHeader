@class UIImageView, NSURL, UIView, UIButton;

@interface IESLiveGameCPIntroducePanelController : UIViewController

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIButton *promoteButton;
@property (copy, nonatomic) id /* block */ promoteAction;
@property (retain, nonatomic) NSURL *imageUrl;
@property (retain, nonatomic) UIView *loadingView;

+ (void)showPanelWithImageUrl:(id)a0 buttonAction:(id /* block */)a1;

- (void)p_setupViews;
- (void)dismissPanelWithCompletion:(id /* block */)a0;
- (id)initPanelWithImageUrl:(id)a0 buttonAction:(id /* block */)a1;
- (void)p_updateCorner;
- (void)switchLoadingWithStatus:(BOOL)a0;
- (void)didTapPromoteButton;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
