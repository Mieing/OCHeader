@class AWERecordBeautyDefaultDownloader, AWEStudioRecorderFeatureBeautyConfig, NSMutableDictionary, AWERecordBeautyDataFilterConfig, NSString, NSMutableArray, AWERecordBeautyCacheManager;
@protocol AWERecordBeautyRenderResultProtocol;

@interface AWERecordBeautyRenderOptimize : NSObject <AWERecordBeautyRenderOptimize>

@property (retain, nonatomic) AWERecordBeautyDefaultDownloader *downloader;
@property (retain, nonatomic) AWEStudioRecorderFeatureBeautyConfig *beautyConfig;
@property (retain, nonatomic) AWERecordBeautyCacheManager *cacheManager;
@property (nonatomic) long long beautyOpenStatus;
@property (retain, nonatomic) NSMutableArray *downloadLists;
@property (retain, nonatomic) NSMutableArray *firstBeautyComposerInfoArray;
@property (retain, nonatomic) NSMutableArray *lastBeautyComposerInfoArray;
@property (retain, nonatomic) NSMutableDictionary *renderItemRecordList;
@property (nonatomic) BOOL hasDownloadBeautyPanel;
@property (retain, nonatomic) AWERecordBeautyDataFilterConfig *beautyDataFilterConfig;
@property (retain, nonatomic) NSMutableArray *preloadComposerNodeLists;
@property (nonatomic) BOOL firstBeautyItemAllParsed;
@property (nonatomic) BOOL lastBeautyItemAllParsed;
@property (weak, nonatomic) id<AWERecordBeautyRenderResultProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloaderConfig;
- (id)defaultPanelName;
- (float)p_effectRatioAfterReduction;
- (id)p_convertToVEComposerInfoFromItemModel:(id)a0 shouldUseValue:(BOOL)a1 value:(long long)a2;
- (BOOL)beautyOn;
- (void)updateBeautyStatus:(BOOL)a0;
- (void)updateBeautyConfig:(id)a0;
- (void)parseBeautyInfoWith:(id)a0 config:(id)a1;
- (void)removeAllCacheInfo;
- (id)getBeautyCacheInfo;
- (id)manualRecursiveUpdateBeautyItemValueWith:(id)a0 itemIdKeyDict:(id)a1 resourceIdKeyDict:(id)a2;
- (void)downloadBeautyInfoWith:(id)a0 resourceIdKeyDict:(id)a1 useBeautyCache:(BOOL)a2 downloadAll:(BOOL)a3;
- (id)defaultRecursiveUpdateBeautyItemValueWith:(id)a0 isChild:(BOOL)a1;
- (void)downloadBeautyPanel;
- (id)defaultUpdateBeautyItemValueWith:(id)a0 isChild:(BOOL)a1;
- (void)continueBeautyItemWithIdKeyDict:(id)a0 resourceIdKeyDict:(id)a1 useBeautyCache:(BOOL)a2 downloadLists:(id)a3 firstRender:(BOOL)a4;
- (id)manualUpdateBeautyItemValueHasCacheWith:(id)a0 itemIdKeyDict:(id)a1 resourceIdKeyDict:(id)a2;
- (id)syncPreloadNodes;
- (id)syncFirstBeautyRenderInfo;
- (id)syncLastBeautyRenderInfo;
- (BOOL)beautyRenderInfoHasDiff:(id)a0;
- (void).cxx_destruct;
- (id)panelName;

@end
