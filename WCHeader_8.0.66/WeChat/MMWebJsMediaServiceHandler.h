@class MMMediaServiceWrapper, NSMutableDictionary;

@interface MMWebJsMediaServiceHandler : MMObject

@property (retain, nonatomic) MMMediaServiceWrapper *mediaService;
@property (retain, nonatomic) NSMutableDictionary *dicEvent2CallBackFunc;

- (id)init;
- (void)dealloc;
- (void)injectMediaToolKitJsContext:(id)a0;
- (BOOL)isAudioPlaying;
- (void)setupAudioSession;
- (void)__callbackWithFunc:(id)a0 errCode:(int)a1 errDesc:(id)a2 retDic:(id)a3;
- (id /* block */)commSdkCallback:(id)a0 containerId:(unsigned int)a1 apiName:(id)a2;
- (void)addApi_addEventListener:(id)a0;
- (void)addApi_removeEventListener:(id)a0;
- (void)addApi_playerCreate:(id)a0;
- (void)notifyEvent:(id)a0 errCode:(int)a1 errDesc:(id)a2;
- (void)addApi_playerStart:(id)a0;
- (void)addApi_playerSeek:(id)a0;
- (void)addApi_playerWait:(id)a0;
- (void)addApi_playerGetFrame:(id)a0;
- (void)addApi_playerStop:(id)a0;
- (void)addApi_playerRemove:(id)a0;
- (void)addApi_audioCreate:(id)a0;
- (void)addApi_audioAddTask:(id)a0;
- (void)addApi_audioDelTask:(id)a0;
- (void)addApi_audioStart:(id)a0;
- (void)addApi_audioUpdate:(id)a0;
- (void)addApi_audioStop:(id)a0;
- (void)addApi_audioRemove:(id)a0;
- (void).cxx_destruct;

@end
