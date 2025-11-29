@class NSString;

@interface WAPackageDownloadPreConnectLogic : NSObject

@property (copy, nonatomic) NSString *cdnPreConnectUrl;
@property (nonatomic) unsigned long long lastPreConnectTimeStampInSeconds;
@property (nonatomic) struct shared_ptr<CronetCallback> { struct CronetCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cb_;

- (id)init;
- (void)tryDoCdnPreConnect;
- (BOOL)isReachPreConnectGap;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
