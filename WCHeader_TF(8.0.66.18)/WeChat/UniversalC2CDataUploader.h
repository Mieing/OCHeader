@class NSString, MMCommonUploadResult, UniversalUploadResult, MMCommonCgiUploader;

@interface UniversalC2CDataUploader : NSObject <MMCommonCgiUploaderDelegate>

@property (retain, nonatomic) MMCommonCgiUploader *thumbUploader;
@property (retain, nonatomic) MMCommonCgiUploader *middleDataUploader;
@property (retain, nonatomic) MMCommonCgiUploader *dataUploader;
@property (retain, nonatomic) MMCommonUploadResult *thumbResult;
@property (retain, nonatomic) MMCommonUploadResult *middleResult;
@property (retain, nonatomic) MMCommonUploadResult *dataResult;
@property (nonatomic) long long scene;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) UniversalUploadResult *result;
@property (nonatomic) unsigned long long totalFileSize;
@property (nonatomic) unsigned long long haveUploadSize;
@property (retain, nonatomic) NSString *downloadingKey;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *thumbFilePath;
@property (retain, nonatomic) NSString *middleFilePath;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) int thumbFileType;
@property (retain, nonatomic) NSString *thumbFileID;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (nonatomic) int middleFileType;
@property (retain, nonatomic) NSString *middleFileID;
@property (retain, nonatomic) NSString *middleAesKey;
@property (nonatomic) int fileType;
@property (retain, nonatomic) NSString *fileID;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *bigFileSignature;
@property (retain, nonatomic) NSString *bigFileAesKey;
@property (nonatomic) BOOL isUseCgi;
@property (nonatomic) BOOL enableHitCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(long long)a0;
- (long long)getCgiUploadScene:(long long)a0;
- (void)startUploadWithProgress:(id /* block */)a0 complete:(id /* block */)a1;
- (void)stopUpload;
- (void)tryStartUpload;
- (BOOL)checkLocalResource:(BOOL)a0;
- (BOOL)startCgiUploadTask;
- (BOOL)tryStartNextCgiUploadTask;
- (void)startCdnUpload;
- (void)onUploadFail:(id)a0 uploadId:(id)a1 retCode:(long long)a2;
- (void)onUploadProgress:(id)a0 uploadProgress:(double)a1;
- (void)onUploadSuccess:(id)a0 result:(id)a1;
- (id)downloadDataWithFileId:(id)a0 aeskey:(id)a1 filePath:(id)a2 fileType:(int)a3 complete:(id /* block */)a4;
- (void).cxx_destruct;

@end
