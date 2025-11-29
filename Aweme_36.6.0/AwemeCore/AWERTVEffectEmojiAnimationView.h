@class NSString, IESLiveVideoGiftController;

@interface AWERTVEffectEmojiAnimationView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *player;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)__configComponents;
- (void)playWithFilePath:(id)a0 onTargetView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)__createPlayer;
- (void)__dismissWithPlayFinished:(BOOL)a0 error:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
