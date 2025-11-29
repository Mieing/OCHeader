@class UIView, IESECMallDeepFeedFavoriteView, IESECGradientView, UILabel, IESECButton, IESECUIImageView;

@interface IESECMallDeepFeedBottomActionView : UIView

@property (retain, nonatomic) IESECButton *commentButton;
@property (retain, nonatomic) IESECUIImageView *commentButtonImageView;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) IESECMallDeepFeedFavoriteView *favoriteView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) IESECGradientView *buyButtonGradientView;
@property (retain, nonatomic) IESECButton *addCartButton;
@property (retain, nonatomic) IESECButton *buyButton;
@property (retain, nonatomic) UILabel *addCartLabel;
@property (retain, nonatomic) UILabel *buyLabel;
@property (retain, nonatomic) UIView *adDotView;

+ (id)countToStr:(long long)a0;

- (void)responseWithEventType:(unsigned long long)a0 sender:(id)a1 userInfo:(id)a2;
- (void)responseWithEventType:(unsigned long long)a0;
- (void)commentButtonClick;
- (void)favoriteViewClick;
- (void)addCartButtonClick:(id)a0;
- (void)buyButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end
