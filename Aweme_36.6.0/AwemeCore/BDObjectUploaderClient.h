@class NSString, NSDictionary, NSArray, NSDate, NSObject;
@protocol BDObjectUploadClientDelegate, OS_dispatch_semaphore;

@interface BDObjectUploaderClient : NSObject {
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
@property (copy, nonatomic) NSArray *externReaders;
@property (weak, nonatomic) id<BDObjectUploadClientDelegate> delegate;
@property (nonatomic) unsigned long long uploadActionType;
@property (copy, nonatomic) NSDictionary *encryptionInput;
@property (copy, nonatomic) NSDictionary *optionInfo;
@property (copy, nonatomic) NSString *templateId;

+ (void)clearAllCache;
+ (id)cacheDirPath;
+ (void)setCacheDirPath:(id)a0;

- (void)setAuthorizationParameter:(id)a0;
- (void)setUploadConfig:(id)a0;
- (void)setRequestParameter:(id)a0;
- (id)initWithFilePaths:(id)a0;
- (void)setDiskResumeUniqueKey:(id)a0;
- (void)setCustomHttpHeaders:(id)a0;
- (BOOL)checkModel;
- (void)asyncClose;
- (void)handleNotify:(id)a0;
- (void)handleNotifyOnMainThread:(id)a0;
- (void)parseLog;
- (id)initWithObjectDatas:(id)a0;
- (id)initWithObjectReaders:(id)a0;
- (id)initWithFilePaths:(id)a0 objectDatas:(id)a1 objectReaders:(id)a2;
- (void)setObjectHostName:(id)a0;
- (void)setObjectSceneTag:(id)a0;
- (id)getObjectInfo:(long long)a0;
- (void)allowContinueUpload;
- (void)close;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
