@class UIImageView, UIView;

@interface AWELongPressDoubleAvatarView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UIView *firstImageBackgroundView;
@property (nonatomic) double singleWidth;
@property (nonatomic) double outerWidth;

+ (id)doubleAvatarViewWithType:(unsigned long long)a0;
+ (id)doubleAvatarViewWithSingleWidth:(double)a0 outerWidth:(double)a1 type:(unsigned long long)a2;
+ (id)doubleAvatarView;

- (void)updateWithFirstImageUrl:(id)a0 secondImageUrl:(id)a1;
- (void)p_makeConstraint;
- (void)p_creatComponents;
- (id)p_getCommonImageView;
- (id)initWithSingleWidth:(double)a0 outerWidth:(double)a1 type:(unsigned long long)a2;
- (void)updateWithFirstImageUrl:(id)a0 firstImage:(id)a1 secondImageUrl:(id)a2 secondImage:(id)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setBgColor:(id)a0;

@end
