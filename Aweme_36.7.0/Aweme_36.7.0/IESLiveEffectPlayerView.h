@class NSString, IESLiveVideoGiftController;

@interface IESLiveEffectPlayerView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ playCompletion;
@property (copy, nonatomic) id /* block */ tapCallBack;
@property (nonatomic) BOOL enableTap;
@property (nonatomic) BOOL loop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didTapMasks:(id)a1;
- (void)successParseConfigResourceModel:(id)a0;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)playVideoWithLocalPath:(id)a0 maskInfo:(id)a1;
- (void)closePlayer;
- (void)setupVideoGiftControl;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)cancel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
