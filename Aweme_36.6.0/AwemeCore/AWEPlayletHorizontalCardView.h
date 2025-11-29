@class NSArray, NSString, AWECardSwitchView, UICollectionViewFlowLayout, AWECardContext, AWECardCellFactory;
@protocol AWEFlowLayoutProtocol, AWEDataConfigProtocol;

@interface AWEPlayletHorizontalCardView : LynxUI <AWECardSwitchViewDelegate>

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) AWECardSwitchView *cardSwitch;
@property (retain, nonatomic) UICollectionViewFlowLayout<AWEFlowLayoutProtocol, AWEDataConfigProtocol> *flowLayout;
@property (retain, nonatomic) AWECardContext *horizontalCardContext;
@property (retain, nonatomic) AWECardCellFactory *cellFactory;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemZoomScale;
@property (nonatomic) double itemMargin;
@property (copy, nonatomic) NSString *itemBorderColorActive;
@property (copy, nonatomic) NSString *itemBorderColorDeactive;
@property (nonatomic) double itemBorderWidthActive;
@property (nonatomic) double itemBorderWidthDeactive;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL shouldReselected;
@property (nonatomic) BOOL isDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1053;
+ (id)__lynx_prop_config__1297;
+ (id)__lynx_prop_config__1124;
+ (id)__lynx_prop_config__760;
+ (id)__lynx_prop_config__911;
+ (id)__lynx_prop_config__982;
+ (id)__lynx_prop_config__1195;
+ (id)__lynx_prop_config__1246;
+ (id)__lynx_prop_config__1348;
+ (id)__lynx_prop_config__1399;
+ (id)__lynx_prop_config__14410;

- (void)propsDidUpdate;
- (void)setSelectedIndex:(long long)a0 requestReset:(BOOL)a1;
- (void)cardSwitchWillDisPlayIndex:(long long)a0;
- (void)cardSwitchDidClickAtIndex:(long long)a0;
- (void)cardSwitchDidScrollToIndex:(long long)a0;
- (void)reselectIndex:(BOOL)a0;
- (void)sendCustomerEventWithIndex:(long long)a0;
- (void)scrollToSelectedIndexPath;
- (void)reselectIndex;
- (double)timeIntervalForDelayScroll;
- (void)setModels:(id)a0 requestReset:(BOOL)a1;
- (void)setItemWidth:(double)a0 requestReset:(BOOL)a1;
- (void)setItemHeight:(double)a0 requestReset:(BOOL)a1;
- (void)setItemZoomScale:(double)a0 requestReset:(BOOL)a1;
- (void)setItemMargin:(double)a0 requestReset:(BOOL)a1;
- (void)setItemCornerRadius:(double)a0 requestReset:(BOOL)a1;
- (void)setItemBorderColorActive:(id)a0 requestReset:(BOOL)a1;
- (void)setItemBorderColorDeactive:(id)a0 requestReset:(BOOL)a1;
- (void)setItemBorderWidthActive:(double)a0 requestReset:(BOOL)a1;
- (void)setItemBorderWidthDeactive:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createView;

@end
