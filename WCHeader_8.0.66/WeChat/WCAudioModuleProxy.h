@class NSString;
@protocol WCAudioModuleProxyDelegate;

@interface WCAudioModuleProxy : NSObject <WCAudioModuleDelegate>

@property (readonly, nonatomic) int audioModuleScene;
@property (readonly, nonatomic) NSString *audioModuleIdentifier;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (weak, nonatomic) id<WCAudioModuleProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(int)a0 identifier:(id)a1;
- (void)updateAudioSession;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
