@class FurionGlobalServiceMonitorConfig;

@interface FurionConfigCenter : NSObject

@property (retain, nonatomic) FurionGlobalServiceMonitorConfig *globalServiceMonitorConfig;

+ (BOOL)furionServiceModelLock;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
