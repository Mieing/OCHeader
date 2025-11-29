@class NSString, UIView;

@interface IESLiveStreamPlayerWindowPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerWindowPluginProtocol>

@property (retain, nonatomic) UIView *windowView;
@property (nonatomic) BOOL playerLockedInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)detachWindowPlayerWithCallTrace:(id)a0;
- (void)attachWindow:(id)a0 callTrace:(id)a1;
- (void)attachWindow:(id)a0 callTrace:(id)a1 pipType:(unsigned long long)a2;
- (void)lockInWindowPlayerView:(BOOL)a0 callTrace:(id)a1;
- (BOOL)isInWindowPlayerView;
- (BOOL)lockedInWindowPlayerView;
- (void).cxx_destruct;

@end
