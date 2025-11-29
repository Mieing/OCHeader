@class UIImageView, IESECGradientView, UILabel, IESECMallInnerFeedProductCommentInfoModel, IESECInnerScrollView, UIView, IESECButton, NSString, IESECMallInnerFeedProductModel, IESECUIImageView, IESECUIButton, LOTAnimationView, UIImage;

@interface IESECMallInnerFeedImmersionBottomActionView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shopView;
@property (retain, nonatomic) UIImageView *shopAvatarImageView;
@property (retain, nonatomic) UILabel *shopTitleLabel;
@property (retain, nonatomic) UILabel *shopSubTitleLabel;
@property (retain, nonatomic) IESECUIButton *favoriteButton;
@property (retain, nonatomic) IESECButton *commentButton;
@property (retain, nonatomic) IESECInnerScrollView *pageScrollView;
@property (retain, nonatomic) IESECUIImageView *commentButtonImageView;
@property (retain, nonatomic) UIImage *mallInnerfeedImmersionFavorite;
@property (retain, nonatomic) UIImage *mallInnerfeedImmersionFavoriteSelected;
@property (retain, nonatomic) UILabel *commentCurrentLabel;
@property (retain, nonatomic) UILabel *commentForwardLabel;
@property (nonatomic) BOOL hasLoadLottieView;
@property (nonatomic) BOOL isPlayingLottie;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) IESECUIButton *addCartButton;
@property (retain, nonatomic) IESECButton *buyButton;
@property (retain, nonatomic) IESECGradientView *buyButtonGradientView;
@property (copy, nonatomic) NSString *shopURLString;
@property (retain, nonatomic) IESECMallInnerFeedProductCommentInfoModel *commentInfo;
@property (retain, nonatomic) LOTAnimationView *shopLivingAnimationView;
@property (retain, nonatomic) IESECUIImageView *shopLivingImageView;
@property (retain, nonatomic) IESECMallInnerFeedProductModel *productModel;

- (void)loadLottieView:(BOOL)a0;
- (void)responseWithEventType:(unsigned long long)a0 sender:(id)a1 userInfo:(id)a2;
- (void)responseWithEventType:(unsigned long long)a0;
- (void)commentButtonClick;
- (void)addCartButtonClick:(id)a0;
- (void)buyButtonClick;
- (void)shopButtonClick;
- (void)favoriteButtonClick:(id)a0;
- (void)startCommentTextAutoPage;
- (void)startLivingAnimation;
- (void)stopLivingAnimation;
- (id)resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;
- (id)buttonTitleColor;
- (id)buttonTitleFont;

@end
