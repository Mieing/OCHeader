@interface AWEXPlayPreciseExperimentUtil : NSObject

+ (id)getExperimentValueWithKey:(id)a0;
+ (void)exposureExperimentWithKey:(id)a0 rtcRoomId:(id)a1;
+ (void)_reportExposureWithKey:(id)a0 rtcRoomId:(id)a1;
+ (id)experimentValueAndExposureWithKey:(id)a0 rtcRoomId:(id)a1;
+ (id)getExperimentVidWithKey:(id)a0;
+ (id)getExposedExperimentVidList;

@end
