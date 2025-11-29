@interface MAEngineIdGenerator : NSObject

@property (nonatomic) long long currentMaxEngineId;

+ (id)sharedInstance;

- (long long)nextId;

@end
