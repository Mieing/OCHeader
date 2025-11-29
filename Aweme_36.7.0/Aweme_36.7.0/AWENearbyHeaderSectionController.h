@class NSString, NSArray, UIImage, NSMutableDictionary, AWENearbyTransformersViewController, NSMutableArray, AWEWaterFallSectionCollectionContext, AWENearbyBannerView;

@interface AWENearbyHeaderSectionController : NSObject <AWEWaterFallSectionControllerProtocol>

@property (retain, nonatomic) NSMutableArray *cellItems;
@property (retain, nonatomic) AWENearbyBannerView *nearbyBannerView;
@property (retain, nonatomic) AWENearbyTransformersViewController *transformerViewController;
@property (nonatomic) BOOL chatroomShouldShow;
@property (retain, nonatomic) NSArray *transformers;
@property (copy, nonatomic) NSString *outTabName;
@property (retain, nonatomic) UIImage *selectCityBgImage;
@property (nonatomic) double selectCityBgAlpha;
@property (retain, nonatomic) NSMutableDictionary *bannerShowedDict;
@property (nonatomic) double transformersViewHeight;
@property (nonatomic) BOOL isInFeedContainer;
@property (readonly, nonatomic) double lifeCardHeight;
@property (readonly, nonatomic) double skylightHeight;
@property (retain, nonatomic) AWEWaterFallSectionCollectionContext *collectionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)constData;
- (void)p_bindStateAndAction;
- (void)didEndDisplayingItem:(id)a0;
- (BOOL)isXtabDefaultHide;
- (void)__buildCellItems;
- (double)__neabyHorizontalMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bannerFrame;
- (BOOL)__shouldShowTransformerTabInHeader;
- (BOOL)__canShowNewNearbyLifeServiceSkylight;
- (BOOL)__shouldShowCitySelectCell;
- (BOOL)__canShowNearbyLifeStyle;
- (BOOL)__shouldShowTransformerTab;
- (BOOL)isInXTab;
- (void)__updateCellItemWithData:(id)a0 type:(unsigned long long)a1;
- (void)updateSelectCityBackgroundImage:(id)a0;
- (void)updateSelectCityBackgroundAlpha:(double)a0;
- (id)items;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0;
- (long long)columnCount;
- (id)init;
- (id)store;
- (void)didSelectItem:(id)a0;
- (id)cellForItem:(id)a0;
- (void)willDisplayItem:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
