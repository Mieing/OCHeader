@class UIStackView, UIView, UIImageView, UIButton, AWEPayRPOpenRedPacketCardConfigModel, AWEPayRPOpenRedPacketViewController, AWEPayRPLoadingView, UILabel, AWEPayMediaCoverView;

@interface AWEPayRPOpenRedPacketBaseCardView : UIView

@property (weak, nonatomic) AWEPayRPOpenRedPacketViewController *openVC;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *bottomCoverView;
@property (retain, nonatomic) UIImageView *overflowImageView;
@property (retain, nonatomic) UIStackView *headerStackView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *ownerLabel;
@property (retain, nonatomic) UILabel *fromSendLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *openTaskView;
@property (retain, nonatomic) UIButton *openButton;
@property (retain, nonatomic) UIButton *detailBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWEPayMediaCoverView *mediaCoverView;
@property (retain, nonatomic) UIImageView *footerLeftDecorationView;
@property (retain, nonatomic) UIImageView *footerRightDecorationView;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UILabel *coverSubTitleView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) AWEPayRPLoadingView *loadingView;
@property (retain, nonatomic) AWEPayRPOpenRedPacketCardConfigModel *cardConfigModel;

- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)releasePlayer;
- (id)p_createGradeLine:(BOOL)a0;
- (id)bottomCoverAnimationView;
- (id)topCoverAnimationView;
- (id)contentAnimationView;
- (id)closeAnimationView;
- (void)setupOpenTaskView;
- (id)p_snapShotImage:(id)a0;
- (id)p_fromLabelTitle;
- (void)openRedPackage;
- (void)p_redirectToDetails;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardConfigModel:(id)a1;
- (void)stopMediaCoverPlay;
- (void)resumeMediaCoverPlay;
- (void)updateInfoContentWithText:(id)a0;
- (id)getOpenButtonName;
- (void)updateOpenTaskViewWithIsHidden:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startLoading;
- (void)updateContent;
- (void)stopLoading;
- (void)setupUI;

@end
