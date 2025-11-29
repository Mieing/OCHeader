@class NSString;

@interface APBToygerSceneEnv : NSObject

@property (copy, nonatomic) NSString *sceneCode;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *sysTime;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
