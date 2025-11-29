@class NSString;
@protocol SECRouterService, SECAppSettings, SECLoggerService, SECTrackerService;

@interface SECAppContext : NSObject

@property (retain) id<SECAppSettings> settings;
@property (retain) id<SECTrackerService> tracker;
@property (retain) id<SECRouterService> router;
@property (retain) id<SECLoggerService> logger;
@property (copy) NSString *lang;

+ (id)shared;

- (void).cxx_destruct;

@end
