@class NSString, LiveCore;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveAudioCapturerImp : NSObject <IESLiveAudioCapturer>

@property (retain, nonatomic) LiveCore *liveCore;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (BOOL)isMicRunning;
- (void)startAudioCaptureWithReason:(id)a0 completion:(id /* block */)a1;
- (void)stopAudioCaptureWithReason:(id)a0;
- (void)stopFakeAudioCaptureWithReason:(id)a0 completion:(id /* block */)a1;
- (void)startFakeAudioCaptureWithReason:(id)a0;
- (void)setAudioMute:(BOOL)a0 reason:(id)a1;
- (BOOL)isFakeMicRunning;
- (id)initWithLiveCoreSession:(id)a0;
- (void)_startAudioCaptureWithCert:(id)a0;
- (void)trackAudioEventWithEvent:(id)a0 success:(BOOL)a1 reason:(id)a2 params:(id)a3;
- (void)_stopAudioCaptureWithCert:(id)a0;
- (void).cxx_destruct;

@end
