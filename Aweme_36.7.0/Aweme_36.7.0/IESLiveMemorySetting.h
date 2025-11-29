@class NSDictionary;

@interface IESLiveMemorySetting : NSObject

@property (retain, nonatomic) NSDictionary *memoryMetrics;

+ (id)sharedInstance;

- (id)memorySetting;
- (void).cxx_destruct;
- (id)init;

@end
