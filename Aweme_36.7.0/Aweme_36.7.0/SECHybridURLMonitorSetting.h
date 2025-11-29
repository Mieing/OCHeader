@class NSDictionary;

@interface SECHybridURLMonitorSetting : NSObject

@property (copy, nonatomic) NSDictionary *skipURLs;
@property (nonatomic) double delayToCollectViewInfo;

- (void).cxx_destruct;
- (id)init;

@end
