@class UIImageView, NSString, UIView;

@interface AWEShareDoubleAvatarView : UIView <AWEShareDoubleAvatarViewProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UIView *firstImageBackgroundView;
@property (nonatomic) double singleWidth;
@property (nonatomic) double outerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doubleAvatarViewWithType:(unsigned long long)a0;
+ (id)doubleAvatarViewWithSingleWidth:(double)a0 outerWidth:(double)a1 type:(unsigned long long)a2;
+ (id)doubleAvatarView;

- (void)updateSingleWidth:(double)a0 outerWidth:(double)a1;
- (void)updateWithFirstImageUrl:(id)a0 secondImageUrl:(id)a1;
- (void)p_makeConstraint;
- (id)p_getCommonImageView;
- (id)initWithSingleWidth:(double)a0 outerWidth:(double)a1 type:(unsigned long long)a2;
- (void)updateWithFirstImageUrl:(id)a0 firstImage:(id)a1 secondImageUrl:(id)a2 secondImage:(id)a3;
- (void)p_updateRadius;
- (void)p_addComponents;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setBgColor:(id)a0;

@end
