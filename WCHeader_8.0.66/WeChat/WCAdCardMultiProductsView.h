@class WCDataItem, WCAdCardMultiProductsScreenTwoView, WCAdCardMultiProductsScreenOneView, NSString, ColorGradientView, WCAdCardMultiProductsDisplayLink;

@interface WCAdCardMultiProductsView : WCAdCardMultiProductsBaseView <WCAdCardMultiProductsScreenDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long currentScreenIndex;
@property (retain, nonatomic) WCAdCardMultiProductsScreenOneView *screenOneView;
@property (retain, nonatomic) WCAdCardMultiProductsScreenTwoView *screenTwoView;
@property (retain, nonatomic) ColorGradientView *topGradientView;
@property (retain, nonatomic) ColorGradientView *bottomGradientView;
@property (retain, nonatomic) ColorGradientView *rightGradientView;
@property (retain, nonatomic) WCAdCardMultiProductsDisplayLink *positionDisplayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightForDataItem:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1;
- (void)dealloc;
- (void)generateScreens;
- (void)resizeSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateGradientView;
- (void)showVerticalGradientViews;
- (void)showRightGradientView;
- (void)hideRightGradientView;
- (void)switchMultiProductsScreenWithIndex:(unsigned long long)a0;
- (void)switchMultiProductsScreenToOne;
- (void)switchMultiProductsScreenToTwo;
- (void)terminateAnimations;
- (void)onMultiProductsScreenViewSaveCurrentCenterWith:(id)a0;
- (void)onMultiProductsScreenViewRestorePrevioisCenterWith:(id)a0;
- (void).cxx_destruct;

@end
