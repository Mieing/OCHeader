@class NSString, NSMutableDictionary;

@interface NPPlayParamConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *netWorkLevelAndStartPlayBufferMap;
@property (retain, nonatomic) NSMutableDictionary *playSessionMap;
@property (copy, nonatomic) NSString *lastSessionId;
@property (nonatomic) int minStartPlayBuffer;
@property (nonatomic) int maxStartPlayBuffer;
@property (nonatomic) double coefficient;
@property (nonatomic) int attenuationTimeOffset;
@property (copy, nonatomic) id /* block */ appInfoRequest;

+ (id)shareInstance;

- (void)configWithSettings;
- (long long)getStartPlayBuffer:(long long)a0 stallTotalCount:(int)a1 retryTotalCount:(int)a2;
- (void)initWithSettings;
- (void)updatePlaySessionInfo:(id)a0 sessionInfo:(id)a1;
- (id)playConfigWithKey:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
