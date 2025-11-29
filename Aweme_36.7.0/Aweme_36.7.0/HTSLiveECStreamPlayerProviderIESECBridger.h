@class NSString;
@protocol HTSLiveStreamPlayerProvider;

@interface HTSLiveECStreamPlayerProviderIESECBridger : NSObject <HTSLiveECStreamPlayerProvider>

@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)isPause;
- (void)pauseWithCallTrace:(id)a0;
- (void)playWithCallTrace:(id)a0;
- (void)resumeSmallWindowStream;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)a0;
- (BOOL)isMute;

@end
