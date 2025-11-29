@class TXCustomHttpDNSDelegateImpl;
@protocol TXLiveBaseDelegate;

@interface TXLiveBase : NSObject {
    struct shared_ptr<liteav::live::TXLiveBaseObserverImpl> { struct TXLiveBaseObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
    struct unique_ptr<liteav::live::TXNtpTimeManagerCallbackImpl, std::default_delete<liteav::live::TXNtpTimeManagerCallbackImpl>> { struct __compressed_pair<liteav::live::TXNtpTimeManagerCallbackImpl *, std::default_delete<liteav::live::TXNtpTimeManagerCallbackImpl>> { struct TXNtpTimeManagerCallbackImpl *__value_; } __ptr_; } _ntp_time_manager_callback;
    struct NtpTimeManager { void /* function */ **x0; } *_ntp_time_manager;
    TXCustomHttpDNSDelegateImpl *_custom_httpDNS_delegate_impl;
}

@property (weak, nonatomic) id<TXLiveBaseDelegate> delegate;

+ (id)sharedInstance;
+ (int)setGlobalEnv:(const char *)a0;
+ (void)setLogLevel:(long long)a0;
+ (void)setConsoleEnabled:(BOOL)a0;
+ (void)setAppVersion:(id)a0;
+ (void)setAudioSessionDelegate:(id)a0;
+ (id)getSDKVersionStr;
+ (id)getPituSDKVersion;
+ (void)setAppID:(id)a0;
+ (void)setLicenceURL:(id)a0 key:(id)a1;
+ (void)setUserId:(id)a0;
+ (id)getLicenceInfo;
+ (long long)updateNetworkTime;
+ (long long)getNetworkTimestamp;
+ (void)enableCustomHttpDNS:(BOOL)a0;

- (id)init;
- (void)dealloc;
- (void)onLicenceLoadNotification:(id)a0;
- (void)onUpdateNetworkTime:(int)a0 message:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
