@class UIView, IESLiveAssociateHeadVideoFoundationDetailViewModel, UIImageView, UIButton, IESLiveAssociateHeadVideoSelectView, CAGradientLayer, UIViewController, IESLiveAssociateHeadVideoSelectModel, UILabel;
@protocol IESLiveCommentVideoShareVideoViewControllerProtocol;

@interface IESLiveAssociateHeadVideoSelectDetailView : UIView

@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectModel *viewModel;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailViewModel *detailViewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *topLeftBackBtn;
@property (retain, nonatomic) UIImageView *detailIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIButton *cancleButton;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) UIButton *associateButton;
@property (retain, nonatomic) UIView *linkView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *linkImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *pauseIcon;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectView *detailView;
@property (retain, nonatomic) UIViewController<IESLiveCommentVideoShareVideoViewControllerProtocol> *currentVideoPlayViewController;
@property (nonatomic) BOOL hasAssociate;

- (void)actionButtonClicked:(id)a0;
- (void)onBackButtonTapped;
- (void)loadImageUrl:(id)a0;
- (void)tapCoverImage:(id)a0;
- (void)tapDetailImage:(id)a0;
- (void)p_trackWithEvent:(id)a0 isActionButton:(BOOL)a1;
- (void)playVideoWithItemID:(id)a0 trackParams:(id)a1;
- (void)cancleSelectVideo:(id)a0;
- (void)reSelectVideo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 diContext:(id)a2;
- (void)showWithViewModel:(id)a0 withDetailModel:(id)a1 hasAssociate:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupSubviews;

@end
