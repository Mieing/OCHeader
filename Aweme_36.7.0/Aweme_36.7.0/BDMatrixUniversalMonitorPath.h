@interface BDMatrixUniversalMonitorPath : NSObject

+ (id)createMonitorCurrentLaunchDir;
+ (id)createUniversalMonitorDir:(int)a0;
+ (id)createUniversalMonitorFile:(id)a0;
+ (id)recordPathForNextLaunch:(int)a0;
+ (id)monitorMapPath;
+ (id)universalMonitorRootDir;
+ (id)lastLaunchTimeMonitorsPath;
+ (id)lastLaunchTimeMonitorsFilePath;

@end
