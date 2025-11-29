@class NSString, NSMutableDictionary;

@interface BDPHeartbeatTrackerReport : NSObject <BDPHeartbeatTrackerReportService>

@property (retain, nonatomic) NSMutableDictionary *heartbeatDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

@end
