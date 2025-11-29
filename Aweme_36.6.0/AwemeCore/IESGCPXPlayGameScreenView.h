@class NSString, UIView;

@interface IESGCPXPlayGameScreenView : UIView <IESGCPCGLayerItemViewProtocol>

@property (weak, nonatomic) UIView *gameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (BOOL)needKeepInFront;
- (id)initWithGameView:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setup;

@end
