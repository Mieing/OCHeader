@class UIControl, NSString, CAShapeLayer, ACCEditLyricsStickerInputData, UIView, AWELyricStickerPanelView;
@protocol ACCEditLyricsStickerDelegate, ACCEditServiceProtocol, ACCEditLyricsStickerDatasource;

@interface ACCEditLyricsStickerViewController : UIViewController <ACCStickerContainerDelegate, ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) ACCEditLyricsStickerInputData *inputData;
@property (retain, nonatomic) UIControl *dismissView;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) AWELyricStickerPanelView *lyricPanelView;
@property (retain, nonatomic) UIView *maskViewOne;
@property (retain, nonatomic) UIView *maskViewTwo;
@property (retain, nonatomic) UIView *maskViewThree;
@property (retain, nonatomic) UIView *maskViewFour;
@property (retain, nonatomic) CAShapeLayer *playerMaskLayer;
@property (nonatomic) long long lyricsFontUpdateStickerId;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditLyricsStickerDatasource> datasource;
@property (weak, nonatomic) id<ACCEditLyricsStickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)p_dismiss;
- (void)clipMusic:(struct _HTSAudioRange { double x0; double x1; })a0 repeatCount:(long long)a1;
- (void)refreshStickerViews;
- (void)stickerContainer:(id)a0 gestureStarted:(id)a1 onView:(id)a2;
- (void)stickerContainer:(id)a0 gestureEnded:(id)a1 onView:(id)a2;
- (BOOL)stickerContainerTapBlank:(id)a0 gesture:(id)a1;
- (double)mediaContainerScaleFactor;
- (void)showLyricsPanel;
- (void)p_createMaskViewUsingShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 playerRadius:(double)a2;
- (void)p_createMaskViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_updateLyricsStickerColorWithId:(long long)a0 color:(id)a1;
- (void)p_removeMusicLyricSticker;
- (void)p_presentMusicStickerSearchVCFromLyricEdit:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_presentMusicStickerAudioClipView;
- (void)p_updateMusicLyricStickerAudioRange:(struct _HTSAudioRange { double x0; double x1; })a0;
- (void)p_updatePlayerModelAudioRange:(struct _HTSAudioRange { double x0; double x1; })a0;
- (void)p_recoverStickerViewsAlpha;
- (void)p_makeMaskLayerForMaskViewOneWithRadius:(double)a0;
- (void)p_makeMaskLayerForMaskViewTwoWithRadius:(double)a0;
- (id)initWithInputData:(id)a0 datasource:(id)a1;
- (void)updatePlayerModelAudioRange:(struct _HTSAudioRange { double x0; double x1; })a0;
- (void)presentMusicStickerSearchVCFromLyricEdit:(BOOL)a0 completion:(id /* block */)a1;
- (void)audioRangeChanging:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;
- (void)audioRangeDidChange:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)refreshUI;
- (void)viewDidLoad;

@end
