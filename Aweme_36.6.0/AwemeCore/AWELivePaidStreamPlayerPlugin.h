@class NSString;
@protocol IESLivePlayerProtocol;

@interface AWELivePaidStreamPlayerPlugin : NSObject <IESLivePaidStreamPlugin>

@property (weak, nonatomic) id<IESLivePlayerProtocol> streamPlayer;
@property (copy, nonatomic) id /* block */ playerShouldMuteAfterPromiseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 screenCapturedDidChange:(BOOL)a1;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)initWithStreamPlayer:(id)a0 playerShouldMuteAfterPromiseHandler:(id /* block */)a1;
- (void)muteStream;
- (void)setPlayerMuted:(BOOL)a0 videoRendering:(BOOL)a1;
- (void)unMuteStream;
- (id)initWithStreamPlayer:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChanged:(double)a1;
- (void).cxx_destruct;

@end
