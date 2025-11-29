@class TXAudioEffectManager;

@interface ILinkPusherBgmManagerAdaptor : NSObject

@property (retain, nonatomic) TXAudioEffectManager *audioEffectManager;

+ (id)sharedInstance;
+ (void)destroySharedIntance;

- (id)initInternal;
- (void)dealloc;
- (id)getAudioEffectManager;
- (void).cxx_destruct;

@end
