@class NSString;

@interface AWEDCFeedModuleService : HTSService <AWEDCFeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordCoverOriginResolution:(double)a0;
+ (double)coverOriginResolution;
+ (id)interestWordsRecommendReason:(id)a0;

- (id)dcFeedViewControllerWithConfig:(id)a0;
- (id)defaultSectionViewModelWithModelArray:(id)a0;
- (id)dcFeedCellElementResourceWithType:(long long)a0 context:(id)a1;
- (Class)livePreviewCellClass;
- (Class)adLivePreviewCellClass;
- (id)livePreviewElement;
- (void)preloadPlaceholderCacheWithPayload:(id)a0 completion:(id /* block */)a1;
- (id)dcFeedPreloadedDataWithPayload:(id)a0;
- (void)dcFeedRegisterPreloadImageCacheWithPayload:(id)a0 cacheModels:(id)a1;
- (void)updateCustomPreloadCache:(id)a0 payload:(id)a1 neverExpires:(BOOL)a2;
- (void)recordShowTimeWithCell:(id)a0 model:(id)a1 referString:(id)a2;
- (id)getElementImageViewFromCell:(id)a0;
- (BOOL)enableOutOfTimeRefreshConfigWithReferString:(id)a0;
- (long long)timeOfOutOfTimeRefreshConfigWithReferString:(id)a0;
- (id)getDCFeedImageTransFromConfig:(id)a0 aweme:(id)a1;
- (id)getImageTrackInfoWithImageURL:(id)a0 aweme:(id)a1 image:(id)a2 useSR:(BOOL)a3 useSharp:(BOOL)a4;
- (void)addDoubleColumnPlayFinishModelItemID:(id)a0 referString:(id)a1;
- (id)dcfeedMonitorDefaultSettingDict;
- (void)dcfeedMonitorSetDefaultSettingDictWithScene:(id)a0 dict:(id)a1;
- (void)setFMPCommonParams:(id)a0 scene:(id)a1;
- (void)setExtraForScene:(id)a0 event:(id)a1 extra:(id)a2;
- (id)getCustomDataProcessWithScene:(id)a0 event:(id)a1 ignoreSetting:(BOOL)a2;
- (void)finishImageMonitorWithProcess:(id)a0 aweme:(id)a1 image:(id)a2 url:(id)a3 type:(id)a4 error:(id)a5;
- (void)finishImageMonitorWithProcess:(id)a0 aweme:(id)a1 image:(id)a2 url:(id)a3 error:(id)a4 extraDict:(id)a5;
- (id /* block */)defaultPreloadImageBlockWithImageBiz:(id)a0;
- (BOOL)needToShowRecommendReason:(id)a0;
- (id)addPrefetchParamsWithArgs:(id)a0;
- (void)beginFMPMonitorWithScene:(id)a0;
- (void)addDCFeedEnterFromPage:(id)a0 referString:(id)a1;
- (void)addDCFeedAwemeGid:(id)a0 referString:(id)a1;
- (void)dislikeWithActionModel:(id)a0;
- (id)dcFeedTabListViewControllerWithTabConfig:(id)a0;
- (Class)getDCFeedTidyModelImageRouterViewController;
- (Class)getDCFeedDislikePanelHelper;
- (void)preloadImageWithTask:(id)a0 referString:(id)a1;
- (Class)lynxContainerAdapterCellClass;
- (id)createDCFeedEventDispatcher:(id)a0;
- (id)coverImageInCell:(id)a0;
- (id)imageElement;

@end
