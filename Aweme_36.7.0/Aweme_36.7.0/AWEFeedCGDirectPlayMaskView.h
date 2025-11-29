@class AWESpecialCardScrollTipView, AWESpecialCardGradientOverlayView, UIView, UIImageView, UIButton, AWEFeedCGDirectPlayMaskViewConfig, AWESpecialCardInfoView, UILabel;
@protocol AWEFeedCGDirectPlayMaskViewDelegate;

@interface AWEFeedCGDirectPlayMaskView : UIView

@property (weak, nonatomic) id<AWEFeedCGDirectPlayMaskViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *topOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *topDeepOverlayView;
@property (retain, nonatomic) AWESpecialCardGradientOverlayView *bottomOverlayView;
@property (retain, nonatomic) UIView *tabbarOverlayView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIView *rightButtonContainer;
@property (retain, nonatomic) UIImageView *rightButtonImageView;
@property (retain, nonatomic) UILabel *rightButtonLabel;
@property (retain, nonatomic) AWESpecialCardScrollTipView *tipView;
@property (retain, nonatomic) AWESpecialCardInfoView *infoView;
@property (retain, nonatomic) AWEFeedCGDirectPlayMaskViewConfig *config;

- (void)onLeftButtonClick;
- (void)updateOrientation:(BOOL)a0;
- (BOOL)p_isBlackColorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (void)onActionButtonClick;
- (void)updateTopMaskWithColor:(id)a0;
- (void)updateBottomMaskWithColor:(id)a0;
- (void)updateWithSubscribedStatus:(BOOL)a0;
- (void)updateBackgroundImage:(id)a0;
- (void)showPlaceholderBgImage;
- (void)addTapGesture;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;
- (void)handleTapGesture;
- (void)updateContent:(id)a0;

@end
