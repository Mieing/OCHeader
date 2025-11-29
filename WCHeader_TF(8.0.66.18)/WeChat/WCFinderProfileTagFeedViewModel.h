@class NSString, WCFinderProfileFeedFetcher, WCFinderStreamProfileHeadData, WCFinderFeedArray, WCFinderProfileFeedManager, WCFinderStreamLoadingState, WCFinderTopicInfo;
@protocol WCFinderProfileTagFeedViewModelDataChange;

@interface WCFinderProfileTagFeedViewModel : NSObject <WCFinderStickTopChangeExt, WCFinderProfileFeedShareViewModel, WCFinderFeedArrayDelegate, WCFinderProfilePullableFeedViewModel>

@property (weak, nonatomic) WCFinderStreamProfileHeadData *headData;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderProfileFeedFetcher *dataFetcher;
@property (retain, nonatomic) WCFinderProfileFeedManager *feedManager;
@property (nonatomic) long long feedCount;
@property (weak, nonatomic) WCFinderProfileTagFeedViewModel *refPageModel;
@property (nonatomic) BOOL hasLoadCache;
@property (weak, nonatomic) id<WCFinderProfileTagFeedViewModelDataChange> dataDelegate;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (readonly, nonatomic) WCFinderStreamLoadingState *pullingState;
@property (readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDataFetcher:(id)a0 topicId:(unsigned long long)a1 username:(id)a2;

- (id)initWithHeadData:(id)a0 topicInfo:(id)a1;
- (id)init;
- (unsigned long long)refreshTime;
- (id)createFeedListViewModel;
- (void)loadLocalCacheDataForNoTopic;
- (void)fillDataItemFromHomeCGI:(id)a0;
- (void)requestFirstPage:(id /* block */)a0;
- (BOOL)requestNextPage:(id /* block */)a0;
- (BOOL)requestPrePage:(id /* block */)a0;
- (void)_afterRequestPrePage:(BOOL)a0;
- (void)fetchJustWatchFeed:(id)a0 complete:(id /* block */)a1;
- (void)_continueFetchNextPageUntilFindTid:(id)a0 retryCnt:(long long)a1 complete:(id /* block */)a2;
- (BOOL)feedArray:(id)a0 ignoreContentVM:(id)a1;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void)onFeedArrayChanged;
- (id)createContentVMFromDataItems:(id)a0;
- (BOOL)hasFetchFirstPage;
- (void)onFinderPostSessionStartUpload:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderContactAudienceMuteSwitchChange:(id)a0;
- (void)onFinderStickTopChanged:(id)a0;
- (void).cxx_destruct;

@end
