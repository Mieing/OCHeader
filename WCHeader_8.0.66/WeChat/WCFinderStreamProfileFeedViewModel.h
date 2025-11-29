@class NSData, NSString, WCFinderJustWatchCollectionFeedItem, NSArray, WCFinderProfileTagFeedViewModel, WCFinderTagListViewLayout, NSMutableArray, WCFinderProfileCollectionListLayout, WCFinderTopicInfo;
@protocol WCFinderStreamProfileFeedViewModelDelegate;

@interface WCFinderStreamProfileFeedViewModel : WCFinderStreamProfilePageModel <WCFinderProfileFeedManagerDelegate, WCFinderProfileTagFeedViewModelDataChange>

@property (retain, nonatomic) NSMutableArray *topicVMS;
@property (retain, nonatomic) WCFinderProfileTagFeedViewModel *justWatchPageVM;
@property (nonatomic) long long selectedTopicId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL hiddenTags;
@property (nonatomic) BOOL displayTopicExpanded;
@property (retain, nonatomic) NSArray *collectionInfos;
@property (retain, nonatomic) NSData *collectionLastBuffer;
@property (nonatomic) BOOL hasCollections;
@property (weak, nonatomic) id<WCFinderStreamProfileFeedViewModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (readonly, nonatomic) BOOL isAuthorPerspective;
@property (retain, nonatomic) WCFinderTopicInfo *selectedTopicInfo;
@property (nonatomic) BOOL hasTags;
@property (retain, nonatomic) WCFinderJustWatchCollectionFeedItem *justWatchCollectionFeedItem;
@property (nonatomic) BOOL isPullingFeedModel;
@property (readonly, nonatomic) WCFinderProfileTagFeedViewModel *displayingTopicFeedVM;
@property (retain, nonatomic) NSString *showPostTimeFeedTid;
@property (retain, nonatomic) WCFinderTagListViewLayout *tagListLayout;
@property (retain, nonatomic) WCFinderProfileCollectionListLayout *collectionListLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)tabId;
+ (BOOL)pageIsRequired;
+ (id)overviewSectionTypes;
+ (BOOL)allowLimitMode;
+ (id)findIndexFromContentVMS:(id)a0 oldTid:(id)a1 oldIdx:(long long *)a2 newTid:(id)a3 newIdx:(long long *)a4;

- (void)doLoadCache;
- (BOOL)shouldDisplayTab;
- (id)pullableFeedModel;
- (void)requestPageData;
- (void)_updateCollectionOverviewSection:(unsigned long long)a0 infoList:(id)a1;
- (id)init;
- (void)updateCollectionList:(id)a0;
- (id)genCollectionDetailListViewModel;
- (BOOL)forbidCollectionList;
- (BOOL)shouldShowCollectionListView;
- (BOOL)shouldShowCollectionListShortcut;
- (BOOL)shouldShowCollectionNextEpisodeShortcut;
- (void)updateCollectionAndTagShowState;
- (id)firstCollectionInfo;
- (void)requestFirstPageData;
- (void)_handleJustWatchAfterResp:(id)a0;
- (void)cleanProfileShowJustWatch;
- (id)displayName;
- (id)viewPageClassName;
- (id)topicFeedVMForTopicId:(unsigned long long)a0;
- (id)allFeedViewModel;
- (void)updateDisplayPostTimeFeed;
- (void)updateTopicList:(id)a0 collectionInfos:(id)a1;
- (void)_updateTopicInfoList:(id)a0;
- (void)updateLayoutItem;
- (id)ensureTopicPageVM:(id)a0 fromArray:(id)a1;
- (id)displayTopics;
- (void)refreshTopics;
- (void)onTopicFeedVMDataCountDecreaseLesThan3:(id)a0;
- (void)retryFirstPageData;
- (void)tryPrefetchJustWatchFeedInfo;
- (void)fetchJustWatchFeed:(id /* block */)a0;
- (void)ensurePullableJustWatchData:(id)a0 watchAction:(id)a1;
- (void)onFeedManager:(id)a0 onPostingFeedSuccess:(id)a1;
- (void).cxx_destruct;

@end
