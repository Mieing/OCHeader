@class UIImage, UILabel, BDImageView;

@interface AWEPlayInteractionLongVideoPlusInfoWithCoverLeftNewElement : AWEPlayInteractionLeftElement

@property (retain, nonatomic) Class longVideoUtil;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *backTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (nonatomic) BOOL tracked;

+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (long long)getEntertainmentCommentTabMediaType:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)trackForShow;
- (BOOL)enableAdaptLargeFontModeV3;
- (void)longVideoPanelClick;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
