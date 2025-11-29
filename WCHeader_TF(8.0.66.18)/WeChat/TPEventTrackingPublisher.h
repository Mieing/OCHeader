@class NSDictionary, TPPlayerEventPublisher, TPPlayerAdapter;

@interface TPEventTrackingPublisher : NSObject

@property (retain, nonatomic) TPPlayerEventPublisher *publisher;
@property (retain, nonatomic) TPPlayerAdapter *playerAdapter;
@property (retain, nonatomic) NSDictionary *invocationHandlerTable;

- (id)initWithAdapter:(id)a0 publisher:(id)a1;
- (void)setupInvocationHandlerTable;
- (void)handlePrepareAsync:(id)a0;
- (void)handleStart:(id)a0;
- (void)handlePause:(id)a0;
- (void)handleStop:(id)a0;
- (void)handleReset:(id)a0;
- (void)handleReleasePlayer:(id)a0;
- (void)handleSeekTo:(id)a0;
- (void)handleSetPlaySpeedRatio:(id)a0;
- (void)handleSelectTrack:(id)a0;
- (id)handlerInvocationWithSEL:(SEL)a0;
- (void).cxx_destruct;

@end
