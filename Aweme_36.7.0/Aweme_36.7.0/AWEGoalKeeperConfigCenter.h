@class NSDictionary;

@interface AWEGoalKeeperConfigCenter : NSObject

@property (copy, nonatomic) NSDictionary *sceneConfig;

+ (id)goalKeeperConfig;
+ (id)configWithRule:(id)a0;
+ (BOOL)enabled;
+ (long long)windowLength;

- (void).cxx_destruct;

@end
