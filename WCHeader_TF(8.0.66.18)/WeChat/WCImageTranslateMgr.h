@class NSString;

@interface WCImageTranslateMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)imagePreferSize;
+ (float)imageCompressionQuality;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)mmkv;

- (void)onServiceInit;
- (id)pathForImgCacheDir;
- (id)pathForImgCacheForBiz:(id)a0;
- (void)setTranslateImageLang:(unsigned long long)a0 biz:(id)a1 desc:(id)a2;
- (unsigned int)getTranslateImageLangForBiz:(id)a0 desc:(id)a1;
- (void)removeTranslateImageLangStateForBiz:(id)a0 desc:(id)a1;
- (void)setImageDetectResult:(unsigned int)a0 biz:(id)a1 desc:(id)a2;
- (unsigned int)getImageDetectResultForBiz:(id)a0 desc:(id)a1;
- (void)removeImageDetectResultForBiz:(id)a0 desc:(id)a1;
- (BOOL)isExistImageDetectResultForBiz:(id)a0 desc:(id)a1;
- (void)setTranslateImageBrand:(id)a0 biz:(id)a1 desc:(id)a2;
- (id)getTranslateImageBrandForBiz:(id)a0 desc:(id)a1;
- (void)removeTranslateImageBrandForBiz:(id)a0 desc:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)internalKVStat:(int)a0 result:(unsigned int)a1 hasSaveOriImg:(BOOL)a2 hasSaveTranImg:(BOOL)a3 showOriImgCnt:(unsigned int)a4 totalTime:(unsigned int)a5 uploadTime:(unsigned int)a6 translateTime:(unsigned int)a7 fileId:(id)a8 aesKey:(id)a9;
- (void)ReportAction:(unsigned long long)a0 source:(int)a1 fileId:(id)a2 aesKey:(id)a3;
- (void)ReportAction:(unsigned long long)a0 source:(int)a1 hasDownloadHD:(BOOL)a2 fileId:(id)a3 aesKey:(id)a4;
- (void)ReportCancelAction:(int)a0 hasSaveOriImg:(BOOL)a1 time:(unsigned int)a2 fileId:(id)a3 aesKey:(id)a4;
- (void)ReportTranslateFor:(int)a0 result:(unsigned int)a1 hasSaveOriImg:(BOOL)a2 hasSaveTranImg:(BOOL)a3 showOriImgCnt:(unsigned int)a4 TotalTime:(unsigned int)a5 uploadTime:(unsigned int)a6 translateTime:(unsigned int)a7 fileId:(id)a8 aesKey:(id)a9;
- (void)ReportTranslateFeedback:(int)a0 originImage:(id)a1 translateImage:(id)a2;
- (id)promiseForUploadCDNImage:(id)a0;

@end
