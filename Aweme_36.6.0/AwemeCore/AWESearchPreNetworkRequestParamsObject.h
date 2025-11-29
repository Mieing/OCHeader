@class NSDictionary, AWESearchPreNetworkContext;

@interface AWESearchPreNetworkRequestParamsObject : NSObject

@property (nonatomic) BOOL isPredictFetch;
@property (nonatomic) BOOL isPassivePredictFetch;
@property (retain, nonatomic) NSDictionary *initialProperties;
@property (nonatomic) unsigned long long ackCountdownTime;
@property (nonatomic) unsigned long long preInitTimeout;
@property (retain, nonatomic) AWESearchPreNetworkContext *preNetworkContext;
@property (nonatomic) BOOL removeChunkStateMachineAfterPreRequest;
@property (nonatomic) BOOL isFrontRequest;

- (void).cxx_destruct;

@end
