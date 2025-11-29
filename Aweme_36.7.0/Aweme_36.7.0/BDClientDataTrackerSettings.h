@class NSDictionary;

@interface BDClientDataTrackerSettings : NSObject

@property (copy, nonatomic) NSDictionary *trackerOfflineConfig;

+ (id)shared;

- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;

@end
