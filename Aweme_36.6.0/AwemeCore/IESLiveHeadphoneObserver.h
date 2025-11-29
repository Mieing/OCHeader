@class AVAudioSession;

@interface IESLiveHeadphoneObserver : NSObject

@property (copy, nonatomic) id /* block */ changeBlock;
@property (nonatomic) long long currentHeadphoneType;
@property (retain, nonatomic) AVAudioSession *audioSession;

+ (id)sharedInstance;

- (void)startObservingWithChangeBlock:(id /* block */)a0;
- (long long)detectCurrentHeadphoneType;
- (BOOL)isHeadphoneConnected;
- (void)handleRouteChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end
