@class NSString;

@interface IESSoloKTVByteAudioKitAuxEventHandler : NSObject <BAudioKitObjcAuxStreamDelegate>

@property (nonatomic) BOOL isStop;
@property (nonatomic) double progress;
@property (nonatomic) BOOL waitingFirstFrame;
@property (nonatomic) double firstFrameTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audiokit:(id)a0 onAuxMixingBegin:(long long)a1;
- (void)audiokit:(id)a0 onAuxMixingEnd:(long long)a1;
- (void)audiokit:(id)a0 onAuxMixingProgress:(long long)a1 playDuration:(long long)a2;
- (void)audiokit:(id)a0 onAuxMixingStartResult:(long long)a1;
- (id)init;

@end
