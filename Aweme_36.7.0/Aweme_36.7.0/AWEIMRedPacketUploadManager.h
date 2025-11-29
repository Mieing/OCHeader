@class AWEIMRedPacketUploadConfig;
@protocol AWEIMRedPacketUploadManagerProtocol;

@interface AWEIMRedPacketUploadManager : NSObject

@property (retain, nonatomic) AWEIMRedPacketUploadConfig *imageConfig;
@property (retain, nonatomic) AWEIMRedPacketUploadConfig *videoConfig;
@property (retain) id<AWEIMRedPacketUploadManagerProtocol> imageClient;
@property (retain) id<AWEIMRedPacketUploadManagerProtocol> videoClient;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;

+ (id)shareInstance;

- (BOOL)checkConfigValid:(id)a0;
- (BOOL)isAuthError:(id)a0;
- (void)uploadFileWithContext:(id)a0 leftRetry:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void)resetConfig;

@end
