@class AVAudioSession;

@interface FlowAudioCoordinator.AVAudioSessionWrapper : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ _doraServiceProvider;
    void /* unknown type, empty encoding */ _settingProvider;
    void /* unknown type, empty encoding */ __currentRoute;
    void /* unknown type, empty encoding */ __category;
    void /* unknown type, empty encoding */ __mode;
    void /* unknown type, empty encoding */ __categoryOptions;
    void /* unknown type, empty encoding */ __routeSharingPolicy;
    void /* unknown type, empty encoding */ observation;
}

@property (nonatomic, readonly) AVAudioSession *session;

- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;

@end
