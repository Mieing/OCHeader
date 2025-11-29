@class NSString, IESLiveVideoGiftController;

@interface AWEIMInteractiveAnimationView : UIView <IESLiveVideoGiftControllerDelegate, AWEIMFullScreenAnimationViewProtocol>

@property (retain, nonatomic) IESLiveVideoGiftController *player;
@property (copy, nonatomic) NSString *currentFilePath;
@property (copy, nonatomic) id /* block */ willPlayBlock;
@property (copy, nonatomic) id /* block */ didPlayBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)p_setupViews;
- (void)playWithFilePath:(id)a0 onTargetView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_autoDismiss;
- (void)dismissWithPlayFinished:(BOOL)a0 success:(BOOL)a1;
- (void)p_checkResourcesWithDirectoryPath:(id)a0 resourceName:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
