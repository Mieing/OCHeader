@interface TPDownloadProxyHelper : NSObject

+ (id)getNativeLibVersion;
+ (id)getHLSOfflineExttagWithVid:(id)a0 linkVid:(id)a1 formatId:(int)a2 randomNum:(long long)a3;
+ (long long)verifyOfflineCacheSync:(id)a0 fileFormat:(int)a1 resourceId:(id)a2 keyId:(id)a3;
+ (id)getOfflineRecordVinfo:(id)a0 withFormat:(id)a1;
+ (void)setTPProxyAdapter:(id)a0;
+ (long long)getOfflineRecordDurationWithVid:(id)a0 format:(id)a1;
+ (void)setIsReadyForOfflineDownload:(BOOL)a0;
+ (BOOL)isMidReadyForOfflineDownload;
+ (id)getNativeInfo:(int)a0;

@end
