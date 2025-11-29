@class AWEFeedChannelEnterModel, NSArray, NSString, AWESmartFeedResponseModel, NSError, AWEListDataController;
@protocol AWEConcernFeedDataControllerProtocol, AWEFeedListContextProtocol;

@interface AWEFeedConcernViewModel : NSObject <AWEFeedConcernViewModelProtocol>

@property (retain, nonatomic) AWESmartFeedResponseModel *followFeedResponseData;
@property (weak, nonatomic) id<AWEFeedListContextProtocol> context;
@property (nonatomic) BOOL isConcernRefreshing;
@property (retain, nonatomic) NSError *videoError;
@property (retain, nonatomic) NSArray *videoList;
@property (nonatomic) BOOL isInitFetch;
@property (copy, nonatomic) id /* block */ videoCompletion;
@property (nonatomic) unsigned long long refreshRequestStatus;
@property (nonatomic) unsigned long long displayStatus;
@property (retain, nonatomic) AWEListDataController<AWEConcernFeedDataControllerProtocol> *refactorDataController;
@property (nonatomic) unsigned long long progressViewStatus;
@property (nonatomic) BOOL vcdDidShow;
@property (nonatomic) unsigned long long recommendCardStatus;
@property (nonatomic) double recommendCardCapsuleViewAlpha;
@property (nonatomic) BOOL isInsertLogicExist;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) BOOL isVideoPreloaded;
@property (readonly, nonatomic) BOOL isLiveTagShowingWhenEnterFollowTab;
@property (readonly, nonatomic) BOOL isForceInsertAwemeRequest;
@property (readonly, nonatomic) BOOL isAidRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateEnterFollowWithModel:(id)a0;
- (void)publishProgressViewBeginPublish;
- (void)publishProgressViewEndPublish;
- (void)vcdTopBubbleDidShow;
- (id)initWithRefactorDataController:(id)a0;
- (id)getEnterModel;
- (BOOL)getHasRedDot;
- (void)fetchConcernDataForFollowContainerWithIsInitFetch:(BOOL)a0 videoCompletion:(id /* block */)a1;
- (void)refreshCompletionWithEmptyData;
- (void)updateRecommendCardStatus:(unsigned long long)a0 alpha:(double)a1;
- (void)setupContext:(id)a0;
- (BOOL)isLiveTagShown;
- (id)concernContext;
- (void)trackColdLaunchNetworkDuration;
- (void)updateConcernRefreshingWithRequestStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
