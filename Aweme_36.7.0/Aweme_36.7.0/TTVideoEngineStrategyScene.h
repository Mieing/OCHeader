@class NSString;

@interface TTVideoEngineStrategyScene : NSObject

@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *briefSceneId;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL muted;
@property (nonatomic) long long maxVisibleCardCnt;
@property (copy, nonatomic) NSString *configString;

+ (id)scene:(id)a0;

- (id)initWithSceneId:(id)a0;
- (void).cxx_destruct;
- (id)toJsonString;

@end
