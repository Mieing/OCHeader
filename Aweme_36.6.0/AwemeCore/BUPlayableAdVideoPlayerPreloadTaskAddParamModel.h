@class NSString;

@interface BUPlayableAdVideoPlayerPreloadTaskAddParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *playAuthToken;
@property (nonatomic) long long resolution;
@property (nonatomic) BOOL useVideoModel;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
