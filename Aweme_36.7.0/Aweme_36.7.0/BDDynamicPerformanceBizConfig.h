@class NSString;

@interface BDDynamicPerformanceBizConfig : NSObject <BDDPBizConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNetTraffic;
+ (BOOL)enableNetTrafficStatistical;
+ (id)netTrafficConfig;
+ (id)defaultConfig;

- (double)getLaunchStartTimestamp;

@end
