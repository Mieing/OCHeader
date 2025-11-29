@class UIColor, NSString, UIImageView, UIScrollView, UIView, NSNumber;
@protocol MMNavBarInteractiveDelegate;

@interface MMNavBarInteractiveConfig : MMObject

@property (nonatomic) unsigned long long navBarInteractiveStyle;
@property (nonatomic) double navBarFadeInStartOffset;
@property (nonatomic) double navBarFadeInEndOffset;
@property (retain, nonatomic) UIView *customNavBarView;
@property (retain, nonatomic) UIView *gradientView;
@property (nonatomic) double navBarShrinkRemainHeight;
@property (retain, nonatomic) UIScrollView *scrollViewForNavBarInteraction;
@property (retain, nonatomic) UIColor *fadeInColor;
@property (weak, nonatomic) id<MMNavBarInteractiveDelegate> m_delegate;
@property (retain, nonatomic) NSString *rightBarButtonImage;
@property (retain, nonatomic) NSString *rightBarButtonImage2;
@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) double lastContentInsetTop;
@property (nonatomic) long long scrollNavBarState;
@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) NSNumber *foregroundColor;

- (id)initFadeStyleWithScrollView:(id)a0;
- (id)initFadeStyleWithScrollView:(id)a0 fadeInColor:(id)a1 fadeInStartOffset:(double)a2 fadeInEndOffset:(double)a3;
- (id)initTransitionStyleWithScrollView:(id)a0;
- (id)initBGTransparetStypeWithScrollView:(id)a0;
- (void).cxx_destruct;

@end
