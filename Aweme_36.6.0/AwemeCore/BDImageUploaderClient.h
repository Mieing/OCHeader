@class NSString, NSDictionary, NSArray, NSDate, NSObject;
@protocol BDImageUploadClientDelegate, OS_dispatch_semaphore;

@interface BDImageUploaderClient : NSObject {
    void *_uploader;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSDictionary *logDict;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (retain, nonatomic) NSDate *expirationTime;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *serverAuth;
@property (copy, nonatomic) NSString *dnsIp;
@property (nonatomic) long long preHeatMode;
@property (copy, nonatomic) id /* block */ preHeatCompletion;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (copy, nonatomic) NSArray *externReaders;
@property (weak, nonatomic) id<BDImageUploadClientDelegate> delegate;
@property (nonatomic) unsigned long long uploadActionType;
@property (copy, nonatomic) NSDictionary *encryptionInput;
@property (copy, nonatomic) NSDictionary *optionInfo;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) id /* block */ resultUsedHandle;

- (void)setAuthorizationParameter:(id)a0;
- (void)setUploadConfig:(id)a0;
- (void)setRequestParameter:(id)a0;
- (void)setImageHostName:(id)a0;
- (id)initWithFilePaths:(id)a0;
- (id)initWithImageDatas:(id)a0;
- (void)setCustomHttpHeaders:(id)a0;
- (BOOL)checkModel;
- (void)asyncClose;
- (void)handleNotify:(id)a0;
- (void)handleNotifyOnMainThread:(id)a0;
- (void)allowMergeUpload;
- (void)setPreUploadEncryptionMode:(long long)a0;
- (void)asyncCancelUpload:(id /* block */)a0;
- (void)parseLog;
- (void)allowContinueUpload;
- (id)initWithFileNum:(int)a0;
- (id)initWithImageReaders:(id)a0;
- (id)initWithFilePaths:(id)a0 imageDatas:(id)a1 imageReaders:(id)a2 fileNum:(int)a3;
- (void)setImageSceneTag:(id)a0;
- (id)getImageInfo:(long long)a0;
- (id)getError:(int)a0;
- (void)startPreHeatImageCountThreshold:(int)a0 completion:(id /* block */)a1;
- (void)close;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
