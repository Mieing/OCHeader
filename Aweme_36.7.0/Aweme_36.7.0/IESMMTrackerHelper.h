@class HMDTTMonitor, NSString;

@interface IESMMTrackerHelper : NSObject <IESMMTrackerHelperProtocol>

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureMMTracker:(id)a0;
+ (void)load;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

@end
