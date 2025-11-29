@interface BDMatrixUniversalMonitor : NSObject

+ (void)launchTime;
+ (void)managerInitOnce;
+ (void)insertMonitor:(id)a0;
+ (void)syncMonitorMapUnThreadSafe;
+ (BOOL)_addContent:(id)a0 monitorType:(unsigned long long)a1;
+ (BOOL)_addContentUnThreadSafe:(id)a0 content:(id)a1;
+ (void)requestDataChannelWithType:(unsigned long long)a0 reportType:(unsigned long long)a1 needImagesInfo:(BOOL)a2;
+ (void)asyncAddContent:(id)a0 monitorType:(unsigned long long)a1 callback:(id /* block */)a2;
+ (BOOL)addContent:(id)a0 monitorType:(unsigned long long)a1;

@end
