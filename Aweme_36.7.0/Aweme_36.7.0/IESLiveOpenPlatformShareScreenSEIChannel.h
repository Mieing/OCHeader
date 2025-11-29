@class NSTimer;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveOpenPlatformShareScreenSEIChannel : NSObject

@property (retain, nonatomic) id<IESLiveRealStreamingProvider> realStreamingProvider;
@property (retain, nonatomic) NSTimer *seiTimer;

- (void)sendSEIWithStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2;
- (void)sendInteractSEIWithStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2 extra:(id)a3;
- (void)stopSEIChannel;
- (void)stopInteractSEIChannel;
- (id)_SEIStringWithShareScreenStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2;
- (void)_sendSingleSEIWithModel:(id)a0;
- (id)_seiDicWithShareScreenStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2;
- (void)_sendSingleInteractSEI:(id)a0;
- (void).cxx_destruct;

@end
