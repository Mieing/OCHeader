@class EmoticonUploadCdn, EmoticonOperateCgi, NSString, EmoticonUploadInfoObj, EmoticonUploadPrepareCgi;
@protocol EmoticonUploaderDelegate;

@interface EmoticonUploader : MMObject <EmoticonUploadPrepareCgiDelegate, EmoticonUploadCdnDelegate>

@property (weak, nonatomic) id<EmoticonUploaderDelegate> delegate;
@property (retain, nonatomic) EmoticonUploadInfoObj *uploadInfo;
@property (retain, nonatomic) EmoticonUploadPrepareCgi *prepareCgi;
@property (retain, nonatomic) EmoticonUploadCdn *uploadCdn;
@property (retain, nonatomic) EmoticonOperateCgi *operateCgi;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL shouldOperateAdd;
@property (retain, nonatomic) NSString *realMd5;
@property (nonatomic) unsigned long long failReason;
@property (nonatomic) unsigned long long operateRetryCount;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUploadInfo:(id)a0 shouldOperateAdd:(BOOL)a1 delegate:(id)a2;
- (id)initWithUploadInfo:(id)a0 shouldOperateAdd:(BOOL)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)startUpload;
- (void)cancelUpload;
- (void)onUploaderSuccessWithEmojiInfoObj:(id)a0;
- (void)onUploaderFail;
- (void)onUploaderFailWithRealMd5:(id)a0;
- (void)onEmoticonUploadPrepareSuccess:(id)a0;
- (void)onEmoticonUploadPrepareFail;
- (void)onEmoticonUploadCdnSuccessWithRealMd5:(id)a0;
- (void)onEmoticonUploadCdnFail;
- (void).cxx_destruct;

@end
