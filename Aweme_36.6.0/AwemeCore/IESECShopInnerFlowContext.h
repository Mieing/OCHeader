@class UIColor, NSString, NSDictionary, UICollectionView, UIViewController;
@protocol IGListCollectionContext;

@interface IESECShopInnerFlowContext : IESECShopPageContextV2

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *secShopId;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) NSString *passThroughParams;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) long long preloadNum;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) double enterTime;
@property (nonatomic) long long currentTopIndex;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *pageBtm;
@property (copy, nonatomic) NSString *sectionId;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL showGuideGesture;
@property (copy, nonatomic) NSString *skeletonImageName;
@property (nonatomic) double estimatedHeightFactor;
@property (nonatomic) BOOL showCardFullContainer;
@property (copy, nonatomic) NSString *footerText;
@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;
@property (copy, nonatomic) NSDictionary *sliceConfigs;
@property (nonatomic) BOOL delayDataUpdate;

- (void)configCommon;
- (void)configWithTabType:(unsigned long long)a0;
- (void)configShopInner;
- (void)configShopMoment;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
