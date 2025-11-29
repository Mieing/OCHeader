@class IESECMallCustomDiskCacheConfig, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSDictionary, IESECMallImagePrefetchConfigModel;

@interface IESECMallImagePrefetchManager : NSObject

@property (nonatomic) BOOL preloadFirstScreenImage;
@property (copy, nonatomic) NSArray *preloadFirstScreenCacheDataPageNames;
@property (nonatomic) BOOL preloadLoadmoreImage;
@property (nonatomic) BOOL preloadLoadmoreRequestImage;
@property (nonatomic) long long loadmoreImageNum;
@property (nonatomic) long long loadmoreImageLowPriorityNum;
@property (nonatomic) BOOL preloadNextTabRequestImage;
@property (nonatomic) long long nextTabImageNum;
@property (nonatomic) long long nextTabImageLowPriorityNum;
@property (nonatomic) BOOL preloadTabSelectedImage;
@property (nonatomic) long long tabSelectedImageNum;
@property (nonatomic) long long tabSelectedImageLowPriorityNum;
@property (nonatomic) BOOL preloadPitayaRefreshImage;
@property (nonatomic) long long pitayaRefreshImageNum;
@property (nonatomic) long long pitayaRefreshImageLowPriorityNum;
@property (nonatomic) long long preloadImageDecoupling;
@property (nonatomic) long long slideLoadImageNum;
@property (nonatomic) BOOL preloadGreatPromotionImage;
@property (retain, nonatomic) NSMutableSet *preloadedURLs;
@property (retain, nonatomic) NSMutableDictionary *preloadedURLsMap;
@property (copy, nonatomic) NSString *headerSectionID;
@property (copy, nonatomic) NSString *favoriteSectionID;
@property (copy, nonatomic) NSArray *preConnectDomains;
@property (nonatomic) double lastPreConnectTimeStamp;
@property (nonatomic) double preConnectInterval;
@property (copy, nonatomic) NSDictionary *domainConnectConfig;
@property (retain, nonatomic) IESECMallImagePrefetchConfigModel *processConfig;
@property (retain, nonatomic) IESECMallCustomDiskCacheConfig *ruleConfigs;
@property (nonatomic) BOOL shouldModify;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *lastPageAddress;
@property (nonatomic) BOOL backupStoreReady;

+ (id)sharedManager;

- (id)logExtra;
- (id)isMatchCustomCacheWithImageUrl:(id)a0 bizTag:(id)a1 sceneTag:(id)a2;
- (void)preloadPromotionImage:(id)a0;
- (id)logExtraWithTag:(id)a0;
- (BOOL)isValidUrl:(id)a0;
- (void)preConnectImageHostsIfNeeded;
- (void)preloadImageWithCellDisplayAtsection:(long long)a0 index:(long long)a1 sectionModels:(id)a2 pageName:(id)a3;
- (id)preloadBackgroundFromModel:(id)a0;
- (void)preLoadImageFromConfigToMemory:(id)a0 logExtra:(id)a1;
- (id)preloadImagesFromData:(id)a0;
- (void)preLoadImageFromConfig:(id)a0 logExtra:(id)a1 pageName:(id)a2;
- (void)preloadFirstScreenData:(id)a0 pageName:(id)a1;
- (void)preloadLoadMoreData:(id)a0 imageNum:(long long)a1 imageLowPriorityNum:(long long)a2 preloadTag:(id)a3 pageName:(id)a4;
- (void)preLoadImageFromConfig:(id)a0 logExtra:(id)a1 options:(unsigned long long)a2 pageName:(id)a3;
- (BOOL)preloadedURLsContainsURL:(id)a0 pageName:(id)a1;
- (id)processImageUrl:(id)a0 config:(id)a1;
- (void)removeCustomCacheForKey:(id)a0;
- (BOOL)isMatchRule:(id)a0 imageUrl:(id)a1 bizTag:(id)a2 sceneTag:(id)a3;
- (id)ecNAMallPreloadImageOptKey;
- (id)ecNAMallPreloadImageOpt;
- (void)addToPreloadedURLs:(id)a0 pageName:(id)a1;
- (id)getElementFromDictionary:(id)a0 path:(id)a1 config:(id)a2;
- (id)getElementFromArray:(id)a0 element:(id)a1 path:(id)a2 config:(id)a3;
- (id)modifyItemWithConfig:(id)a0 item:(id)a1;
- (void)updatePageName:(id)a0 withPageAddress:(id)a1;
- (void)preloadBackgroundImageToMemory:(id)a0;
- (void)preloadFirstScreenCacheData:(id)a0 pageName:(id)a1;
- (void)preloadTabSelectedData:(id)a0 pageName:(id)a1;
- (void)preloadPitayaRefreshData:(id)a0 pageName:(id)a1;
- (void)preloadLoadMoreData:(id)a0 pageName:(id)a1;
- (void)preloadNextTabData:(id)a0 pageName:(id)a1;
- (void)preConnectDomainHostsWithConfigIfNeeded;
- (id)preloadFirstScreenImageForIndependentCache:(id)a0 shouldModify:(BOOL)a1;
- (void)handleIndependentImageCacheWithOldImages:(id)a0 newImages:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
