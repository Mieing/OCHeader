@class UIImageView, UIView;

@interface AWEIMDoubleAvatarView : UIView

@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UIView *firstImageBackgroundView;
@property (nonatomic) BOOL isWhiteBg;
@property (nonatomic) double singleWidth;
@property (nonatomic) double outerWidth;

+ (id)doubleHeaderViewWithIsWhiteBg:(BOOL)a0 singleWidth:(double)a1 borderWidth:(double)a2;
+ (id)doubleHeaderViewWithIsWhiteBg:(BOOL)a0 singleWidth:(double)a1 outerWidth:(double)a2;
+ (id)doubleHeaderViewWithIsWhiteBg:(BOOL)a0;

- (void)updateWithFirstImageUrl:(id)a0 secondImageUrl:(id)a1;
- (void)p_makeConstraint;
- (id)initWithIsWhiteBg:(BOOL)a0 singleWidth:(double)a1 outerWidth:(double)a2;
- (void)p_creatComponents;
- (id)p_getCommonImageView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setBgColor:(id)a0;

@end
