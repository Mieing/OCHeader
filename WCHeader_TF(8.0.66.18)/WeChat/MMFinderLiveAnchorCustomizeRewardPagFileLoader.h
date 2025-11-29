@class MMLiveStorageCleanupPinningToken, MMLiveResourceFetcherFanoutFlowAction, NSMutableDictionary;

@interface MMFinderLiveAnchorCustomizeRewardPagFileLoader : NSObject

@property (retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher;
@property (retain, nonatomic) NSMutableDictionary *taskDictionary;
@property (retain, nonatomic) NSMutableDictionary *completionDictionary;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;

- (id)init;
- (void)loadPagFileWithUrl:(id)a0 md5:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
