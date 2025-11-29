@interface IESGCPCGPreciseExperimentUtil : NSObject

+ (id)getExperimentVidWithKey:(id)a0;
+ (id)getExposedExperimentVidList;
+ (id)getExperimentValueWithKey:(id)a0 exposure:(BOOL)a1;
+ (void)exposureExperimentWithKey:(id)a0 actionId:(id)a1 rtcRoomId:(id)a2;
+ (void)_reportExposureWithKey:(id)a0 actionId:(id)a1 rtcRoomId:(id)a2;
+ (id)getExperimentValueWithKey:(id)a0 exposure:(BOOL)a1 actionId:(id)a2 rtcRoomId:(id)a3;

@end
