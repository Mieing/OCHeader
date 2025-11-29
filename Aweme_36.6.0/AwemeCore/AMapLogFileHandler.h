@class NSString, NSMutableDictionary, AMapLogCloudConfig, NSDate;

@interface AMapLogFileHandler : AMapLogHandler

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *sdkDirPath;
@property (retain, nonatomic) NSMutableDictionary *mmapFiles;
@property (retain, nonatomic) NSMutableDictionary *cachePoolDic;
@property (retain, nonatomic) AMapLogCloudConfig *cloudConfigForSDK;
@property unsigned long long totalFileSize;
@property unsigned long long totalLogNum;
@property (retain, nonatomic) NSDate *lastUploadDateError;
@property (retain, nonatomic) NSDate *lastUploadDateInfo;
@property (copy, nonatomic) NSString *synchronizeToken;
@property (readonly, nonatomic) NSMutableDictionary *totalFileSizeDic;

- (void)_loadLocalFileDetail;
- (unsigned long long)_getTotalSizeOfLocalFile:(id)a0;
- (void)_updateTotalSizeOfLocalFile:(unsigned long long)a0 levelStr:(id)a1;
- (id)_mmFileWithLevelStr:(id)a0 logData:(id)a1;
- (void)_triggerLocalSizeCheck:(unsigned long long)a0 levelStr:(id)a1;
- (void)_triggerUploadSizeCheck:(unsigned long long)a0 levelStr:(id)a1 complete:(id /* block */)a2;
- (id)_getCacheContentsWithLevelStr:(id)a0;
- (void)_checkMmFileUseable:(id)a0;
- (void)uploadLogWithlevelStr:(id)a0 complete:(id /* block */)a1;
- (id)_cacheMmFileWithLevel:(id)a0;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (id)initWithComponentName:(id)a0;

@end
