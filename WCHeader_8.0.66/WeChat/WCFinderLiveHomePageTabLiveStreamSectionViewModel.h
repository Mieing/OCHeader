@class NSMutableDictionary, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate;

@interface WCFinderLiveHomePageTabLiveStreamSectionViewModel : WCFinderLiveHomePageSectionViewModel <ILocationMgrExt>

@property (retain, nonatomic) NSMutableDictionary *pageVMDict;
@property (retain, nonatomic) WCFinderLiveStreamContainerModel *tabListContainer;
@property (weak, nonatomic) id<WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate> delegate;
@property (nonatomic) BOOL isLocationServiceAuthrized;

- (id)initWithContainerModel:(id)a0 scene:(int)a1 ctx:(id)a2 isSkeleton:(BOOL)a3 tabListContainer:(id)a4;
- (void)initializePageVM;
- (unsigned long long)curTabId;
- (unsigned long long)curSubTabId;
- (void)resetExposeSession;
- (BOOL)isSectionCustomHeaderView;
- (void)cancelSectionCgi;
- (id)currentPageVM;
- (id)pageVM:(unsigned long long)a0;
- (void)removePageVM:(id)a0;
- (id)getOrCreatePageVM:(id)a0;
- (id)autoPlayingFeedVMs;
- (id)containerContext:(unsigned long long)a0 tabInfo:(id)a1;
- (void)checkLocationAuthorize;
- (void)checkFetchLocation:(BOOL)a0;
- (void)_fetchLocation:(id /* block */)a0;
- (void)fetchRecommendBottomWhenLessThan6;
- (void)fetchRecommendBottom;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)a0;
- (void).cxx_destruct;

@end
