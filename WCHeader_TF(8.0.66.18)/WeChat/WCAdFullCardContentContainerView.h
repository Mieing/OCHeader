@class WCAdClickBarView, WCAdIconView, NSString, ColorGradientView, MMUILabel;

@interface WCAdFullCardContentContainerView : MMUIView

@property (retain, nonatomic) WCAdIconView *iconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;
@property (nonatomic) double iconViewOriginX;
@property (nonatomic) double titleViewOriginX;
@property (nonatomic) double descViewOriginX;
@property (retain, nonatomic) ColorGradientView *bottomColorGradientView;
@property (retain, nonatomic) ColorGradientView *topColorGradientView;
@property (retain, nonatomic) WCAdClickBarView *clickBarView;
@property (retain, nonatomic) NSString *clickBarTitle;
@property (nonatomic) long long logoIconType;
@property (nonatomic) BOOL hasClickBar;
@property (nonatomic) BOOL doOnce;
@property (nonatomic) BOOL canShowClickBar;
@property (nonatomic) BOOL canShowBackgroundColorView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andDataItem:(id)a1;
- (BOOL)initViewsWithDataItem:(id)a0;
- (id)createColorGradientViewWithPosition:(int)a0 onlyForLogo:(BOOL)a1 maxAlpha:(double)a2;
- (void)showTextContentAnimation;
- (void)resetClickBar;
- (void)showAdClickBar;
- (void)setViewProperty:(id)a0 alpha:(double)a1 left:(double)a2 hidden:(BOOL)a3;
- (void).cxx_destruct;

@end
