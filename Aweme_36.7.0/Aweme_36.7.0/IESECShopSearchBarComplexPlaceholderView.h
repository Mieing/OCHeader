@class CAGradientLayer, NSString, YYLabel, IESECShopSearchBarPlaceholderAnimator;
@protocol IESECShopSearchBarAnimationDelegate;

@interface IESECShopSearchBarComplexPlaceholderView : UIView <IESECShopSearchBarAnimationDelegate>

@property (retain, nonatomic) IESECShopSearchBarPlaceholderAnimator *animator;
@property (retain, nonatomic) CAGradientLayer *suffixMaskLayer;
@property (readonly, nonatomic) NSString *currentDisplayedWord;
@property (retain, nonatomic) YYLabel *pureLabel;
@property (weak, nonatomic) id<IESECShopSearchBarAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableComplexPlaceholder;
- (void)enableComplexPlaceholderWithDataSource:(id)a0;
- (void)animatorDidRefresh;
- (void).cxx_destruct;
- (void)pause;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)layoutSubviews;
- (void)dealloc;

@end
