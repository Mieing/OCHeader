@class NSString, TabResponse, TabItem, NSDictionary, IESLiveSearchFrequencyManager, NSMutableArray, HTSLiveFeedDataApi, NSNumber;

@interface IESLiveSearchListDataManager : HTSLiveApi

@property (nonatomic) BOOL requestOnAir;
@property (retain, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) TabItem *tabconfig;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL fromRec;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL showRecommend;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) IESLiveSearchFrequencyManager *frequencyManager;

- (BOOL)enableShowChallenge;
- (id)buildEnterRoomSourcePage;
- (id)initWithTabModel:(id)a0;
- (void)initFeedApi;
- (void)fetchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchFeedData:(id /* block */)a0 first:(BOOL)a1;
- (BOOL)isDuplicateLive:(id)a0;
- (id)makeLiveTitle:(id)a0;
- (void)parseChannelIDFromUrl:(id)a0;
- (id)enterFromParamWithConfig:(id)a0;
- (void)initialFetchWithKeyword:(id)a0 enterMethod:(id)a1 completion:(id /* block */)a2;
- (void)loadMoreWithcompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
