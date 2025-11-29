@class NSString;
@protocol IESVSVideoPlayerRouter;

@interface IESECLiveVSVideoPlayerRouterIESECBridger : NSObject <IESECLiveVSVideoPlayerRouter>

@property (retain, nonatomic) id<IESVSVideoPlayerRouter> protoObj;
@property (nonatomic, getter=isMuted, setter=setMute:) BOOL muted;
@property (readonly, nonatomic, getter=getCurrentPlaybackTime) double currentPlaybackTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerFrame;
@property (nonatomic) double startLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)seekVideoWithProgress:(double)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)replay;
- (void)pause:(BOOL)a0;

@end
