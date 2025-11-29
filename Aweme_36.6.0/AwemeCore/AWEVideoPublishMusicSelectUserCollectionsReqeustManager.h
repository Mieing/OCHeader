@interface AWEVideoPublishMusicSelectUserCollectionsReqeustManager : NSObject

@property (nonatomic) BOOL isProcessing;
@property (nonatomic) unsigned long long channelID;
@property (nonatomic) unsigned long long musicCntPerPage;
@property (nonatomic) unsigned long long curr;
@property (nonatomic) BOOL hasMore;

- (void)resetRequestParams;
- (void)fetchCurrPageModelsWithCompletion:(id /* block */)a0;
- (id)init;

@end
