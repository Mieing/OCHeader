@class NSString, AWEListenFeedDiversionModel;

@interface AWEListenFeedModel : AWEBaseApiModel

@property (nonatomic) long long videoSleepStatus;
@property (nonatomic) long long musicCoverListen;
@property (copy, nonatomic) NSString *traceInfo;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWEListenFeedDiversionModel *listenDiversion;

+ (id)listenDiversionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
