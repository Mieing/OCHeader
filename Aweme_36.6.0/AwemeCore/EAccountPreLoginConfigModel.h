@interface EAccountPreLoginConfigModel : NSObject

@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) double connectTimeoutInterval;
@property (nonatomic) double totalTimeoutInterval;

- (id)initWithDefaultConfig;

@end
