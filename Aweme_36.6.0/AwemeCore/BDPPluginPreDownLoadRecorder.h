@interface BDPPluginPreDownLoadRecorder : NSObject

+ (void)addPreloadList:(id)a0 preloadId:(id)a1;
+ (void)updatePluginUsedTimeWithPluginID:(id)a0 version:(id)a1 routeID:(id)a2 time:(double)a3;
+ (id)preDownLoadRecord;
+ (void)clearUsedRecord;

@end
