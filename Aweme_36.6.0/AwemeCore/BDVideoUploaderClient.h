@class NSString, NSDictionary, NSDate, NSObject;
@protocol BDVideoUploadClientDelegate, OS_dispatch_semaphore, BDExternFileReaderInterface;

@interface BDVideoUploaderClient : NSObject {
    void *_uploader;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) id<BDExternFileReaderInterface> reader;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSDictionary *logDict;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (retain, nonatomic) NSDate *expirationTime;
@property (copy, nonatomic) NSString *regionName;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *serverAuth;
@property (copy, nonatomic) NSString *diskResumeUniqueKey;
@property (copy, nonatomic) NSString *dnsIp;
@property (copy, nonatomic) NSDictionary *estimatedVideoInfo;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (nonatomic) long long failedVideoNum;
@property (weak, nonatomic) id<BDVideoUploadClientDelegate> delegate;
@property (nonatomic) unsigned long long uploadActionType;
@property (nonatomic) double snapshot;
@property (nonatomic) BOOL backgroundUpload;
@property (copy, nonatomic) id /* block */ progressHandle;
@property (copy, nonatomic) NSDictionary *encryptionInput;

+ (void)clearAllCache;
+ (id)cacheDirPath;
+ (void)setCacheDirPath:(id)a0;

- (void)setVideoHostName:(id)a0;
- (void)setAuthorizationParameter:(id)a0;
- (void)setUploadConfig:(id)a0;
- (void)setRequestParameter:(id)a0;
- (id)initWithArrayFilePath:(id)a0;
- (id)initWithArrayFilePath:(id)a0 reader:(id)a1 num:(int)a2 enableBatch:(BOOL)a3 type:(int)a4;
- (id)initWithArrayReader:(id)a0 num:(int)a1 type:(int)a2;
- (void)setReader:(id)a0 num:(int)a1 type:(int)a2;
- (void)setVideoSceneTag:(id)a0;
- (void)setCustomHttpHeaders:(id)a0;
- (BOOL)checkModel;
- (void)asyncClose;
- (void)handleNotify:(id)a0;
- (void)handleNotifyOnMainThread:(id)a0;
- (void)allowMergeUpload;
- (void)setPreUploadEncryptionMode:(long long)a0;
- (void)asyncCancelUpload:(id /* block */)a0;
- (id)videoInfoTop;
- (id)videoInfoTop:(long long)a0;
- (void)parseLog;
- (void)addSingleEventLog:(id)a0;
- (BOOL)isAKExpiration:(double)a0;
- (void)setVideoContext:(id)a0 speed:(int)a1 speedThreshold:(int)a2;
- (void)setVideoMetaData:(id)a0;
- (void)setAIGCMeta:(id)a0;
- (void)setAIGCMetaForBatch:(int)a0 aigcMetas:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFilePath:(id)a0;
- (void)start;
- (void)dealloc;
- (id)initWithReader:(id)a0;

@end
