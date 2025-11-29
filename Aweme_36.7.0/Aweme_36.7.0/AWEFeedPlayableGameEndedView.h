@class UIStackView, UIView, AWESpecialCardScrollTipView, AWEFeedPlayableGameEndedViewModel, AWESpecialCardDoubleButtonComponent, UIImageView, AWEFeedInstantGameCardAdView, NSDictionary, UILabel;
@protocol AWEFeedPlayableGameEndedViewDelegate;

@interface AWEFeedPlayableGameEndedView : UIView

@property (retain, nonatomic) NSDictionary *uiConfig;
@property (weak, nonatomic) id<AWEFeedPlayableGameEndedViewDelegate> delegate;
@property (retain, nonatomic) AWEFeedPlayableGameEndedViewModel *model;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *gameLastFrameImageView;
@property (retain, nonatomic) UIImageView *gameIconImageView;
@property (retain, nonatomic) UIStackView *gameInfoStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *subTitleContainer;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEFeedInstantGameCardAdView *adView;
@property (retain, nonatomic) AWESpecialCardDoubleButtonComponent *btnComponent;
@property (retain, nonatomic) AWESpecialCardScrollTipView *tipView;

- (void)onLeftButtonClick;
- (void)onActionButtonClick;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (id)getGaussianBlurWithImage:(id)a0 sigma:(float)a1;
- (void)updateBtnComponentContent;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupImage;

@end
