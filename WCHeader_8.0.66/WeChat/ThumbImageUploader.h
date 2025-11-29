@class MMCommonCgiUploader, NSString;

@interface ThumbImageUploader : NSObject <MMCommonCgiUploaderDelegate>

@property (retain, nonatomic) MMCommonCgiUploader *cgiUploader;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) NSString *fileID;
@property (retain, nonatomic) NSString *aesk;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL enableHitCheck;
@property (nonatomic) BOOL isUseCgi;
@property (nonatomic) long long scene;
@property (nonatomic) int apptype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startUploadWithComplete:(id /* block */)a0;
- (void)startUploadToCdn;
- (void)onUploadSuccess:(id)a0;
- (void)onUploadFail:(id)a0;
- (void)onUploadSuccess:(id)a0 result:(id)a1;
- (void)onUploadFail:(id)a0 uploadId:(id)a1 retCode:(long long)a2;
- (void)onUploadProgress:(id)a0 uploadProgress:(double)a1;
- (void).cxx_destruct;

@end
