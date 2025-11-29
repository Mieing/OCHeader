@class LOTAnimationView, UIView;
@protocol IESLLPlatformLoadingView;

@interface IESLLPOILoadingView : UIView

@property (nonatomic) unsigned long long loadingStyle;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UIView<IESLLPlatformLoadingView> *platformLoadingView;
@property (nonatomic) BOOL hasInitializedUI;
@property (nonatomic) BOOL forceLight;
@property (nonatomic) double verticalOffset;

+ (void)usingLocalLifeLoading:(id /* block */)a0;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)setupUIIfNeeded;
- (unsigned long long)localLifeLoadingExpType;
- (id)expSuffix;
- (id)lotAnimationNameForExpSuffix:(id)a0;
- (BOOL)useLightTheme;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
