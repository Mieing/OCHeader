@class AWEIMUserMessageHandler, AWEIMAutoSearchGiphyPipelineNode, NSMutableArray;

@interface AWEIMAutoSearchGiphyWarmupManager : NSObject

@property (class, readonly, nonatomic) AWEIMAutoSearchGiphyWarmupManager *sharedManager;

@property (retain, nonatomic) NSMutableArray *warmupKeys;
@property (retain, nonatomic) AWEIMUserMessageHandler *handler;
@property (retain, nonatomic) AWEIMAutoSearchGiphyPipelineNode *refreshCacheNode;
@property (nonatomic) BOOL didFinishLoadWarmupKeys;

- (void).cxx_destruct;

@end
