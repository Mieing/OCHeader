@class NSDictionary, NSString, NSDate;
@protocol BDFileNetworkRoutClientDelegate;

@interface BDFileNetworkRoutClient : NSObject {
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
@property (weak, nonatomic) id<BDFileNetworkRoutClientDelegate> delegate;
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
- (id)initWithRoutMode:(unsigned long long)a0 routWeight:(long long)a1;
- (void)close;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
