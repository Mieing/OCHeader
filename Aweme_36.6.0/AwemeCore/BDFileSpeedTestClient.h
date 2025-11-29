@class NSString, NSDictionary, BDSmartSpeedTest, NSDate;
@protocol BDFileSpeedTestClientDelegate;

@interface BDFileSpeedTestClient : NSObject {
    void *_uploader;
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
@property (nonatomic) int intelligentSpeedTestEnabled;
@property (copy, nonatomic) NSString *intelligentModelURL;
@property (nonatomic) BOOL modelHasInit;
@property (retain, nonatomic) BDSmartSpeedTest *smartSpeedTest;
@property (weak, nonatomic) id<BDFileSpeedTestClientDelegate> delegate;
@property (nonatomic) unsigned long long uploadActionType;

- (void)setVideoHostName:(id)a0;
- (void)setAuthorizationParameter:(id)a0;
- (void)setUploadConfig:(id)a0;
- (void)setRequestParameter:(id)a0;
- (void)setCustomHttpHeaders:(id)a0;
- (BOOL)checkModel;
- (void)asyncClose;
- (void)handleNotify:(id)a0;
- (void)handleNotifyOnMainThread:(id)a0;
- (void)setEnableSmartUploadTest:(int)a0 modelURL:(id)a1;
- (void)checkAndInit;
- (float)predictIntelligentSpeed:(id)a0;
- (id)intelligentCallback:(int)a0 inputString:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
