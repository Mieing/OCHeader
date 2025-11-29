@class UIView, NSString, AWEVideoPublishViewModel;
@protocol ACCMediaContainerViewProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCGlobalStickerServiceProtocol, ACCEditServiceProtocol;

@interface ACCStickerPlayerApplyingImpl : NSObject <ACCEditPreviewMessageProtocol, ACCStickerPlayerApplying>

@property (nonatomic) double currentPlayerTime;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol, ACCGlobalStickerServiceProtocol> stickerService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL isIMRecord;
@property (weak, nonatomic) UIView<ACCMediaContainerViewProtocol> *offScreenMediaContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)mediaContainerView;
- (void)setSticker:(long long)a0 offsetX:(double)a1 offsetY:(double)a2;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (long long)addTextStickerWithUserInfo:(id)a0;
- (long long)addInfoSticker:(id)a0 withEffectInfo:(id)a1 userInfo:(id)a2;
- (void)setSticker:(long long)a0 alpha:(double)a1;
- (void)setSticker:(long long)a0 startTime:(double)a1 duration:(double)a2;
- (void)setStickerLayer:(long long)a0 layer:(long long)a1;
- (void)setStickerScale:(long long)a0 scale:(double)a1;
- (void)removeInfoSticker:(long long)a0;
- (long long)currentBrushNumber;
- (void)setBrushCanvasAlpha:(double)a0;
- (void)setStickerAbove:(long long)a0;
- (struct CGSize { double x0; double x1; })getInfoStickerSize:(long long)a0;
- (struct CGSize { double x0; double x1; })getstickerEditBoxSize:(long long)a0;
- (id)videoData;
- (BOOL)needAdaptPlayer;
- (id)previewEdge;
- (void)setStickerEditMode:(BOOL)a0;
- (void)resetPlayerWithViews:(id)a0;
- (void)continuePlay;
- (void)setHighFrameRateRender:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)resetPlayerWithView:(id)a0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)doRender;
- (void)getStickerId:(long long)a0 props:(id)a1;
- (void)getSourcePreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)setSticker:(long long)a0 offsetX:(double)a1 offsetY:(double)a2 angle:(double)a3 scale:(double)a4;
- (void)setAudioClipRange:(id)a0 forAudioAsset:(id)a1;
- (void)updateVideoData:(id)a0 mvModel:(id)a1 completeBlock:(id /* block */)a2;
- (double)stickerInitialEndTime;
- (long long)addInfoSticker:(id)a0 URS:(id)a1 withEffectInfo:(id)a2 userInfo:(id)a3 alpha:(double)a4;
- (void)setSticker:(long long)a0 offsetX:(double)a1 offsetY:(double)a2 angle:(double)a3 scale:(double)a4 doRender:(BOOL)a5;
- (void)setSticker:(long long)a0 alpha:(double)a1 doRender:(BOOL)a2;
- (void)setSticker:(long long)a0 startTime:(double)a1 duration:(double)a2 doRender:(BOOL)a3;
- (void)setStickerScale:(long long)a0 scale:(double)a1 doRender:(BOOL)a2;
- (void)setStickerAboveForPoiSticker:(long long)a0;
- (long long)addInfoSticker:(id)a0 withEffectInfo:(id)a1 userInfo:(id)a2 imageEditorIndex:(long long)a3;
- (void)setTextSticker:(long long)a0 textParams:(id)a1;
- (long long)addVirtualStickerWithUserInfo:(id)a0;
- (void)setStickerAbove:(long long)a0 doRender:(BOOL)a1;
- (void)recoverLocation:(id)a0;
- (id)calculateStickerLocationForGlobal:(id)a0;
- (void)removeStickerWithType:(unsigned long long)a0;
- (void)setFixTopInfoSticker:(long long)a0;
- (void)setSticker:(long long)a0 angle:(double)a1;
- (id)resetStickerLocation:(id)a0 isRecover:(BOOL)a1;
- (void)revertStickerLocationToRecover:(id)a0;
- (id)reset9V16StickerLocation:(id)a0 isRecover:(BOOL)a1;
- (long long)addInfoSticker:(id)a0 URS:(id)a1 withEffectInfo:(id)a2 userInfo:(id)a3 alpha:(double)a4 doRender:(BOOL)a5;
- (long long)globalAddInfoSticker:(id)a0 URS:(id)a1 withEffectInfo:(id)a2 userInfo:(id)a3;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
