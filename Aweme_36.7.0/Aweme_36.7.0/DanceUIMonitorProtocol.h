@interface DanceUIMonitorProtocol : NSObject

+ (void)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)monitorManager;
+ (void)hmdUploadImmediatelyTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)hmdTrackData:(id)a0 logType:(id)a1;

@end
