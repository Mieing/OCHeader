@class NSString, ACCStickerGesturePlayStateManager;
@protocol ACCTextAbility, AEKNewTextStickerOperator;

@interface ACCAutoCaptionsStickerEditorImpl : ACCBaseStickerEditorImpl <ACCAutoCaptionAbility, ACCEffectCaptionAbility>

@property (nonatomic) long long source;
@property (retain, nonatomic) id<AEKNewTextStickerOperator> playingTextOperator;
@property (retain, nonatomic) ACCStickerGesturePlayStateManager *playStateManager;
@property (weak, nonatomic) id<ACCTextAbility> textAbility;
@property (readonly, copy, nonatomic) NSString *captionStickerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncRefreshCurrentFrame:(double)a0;
- (void)setSticker:(id)a0 alpha:(double)a1;
- (id)stickerWithId:(id)a0;
- (void)setTextStyleWithColor:(id)a0 borderColor:(id)a1 style:(unsigned long long)a2 isColorEdit:(BOOL)a3;
- (void)renderStickerViewWithStickerId:(id)a0;
- (void)setOriginBorderColorForSticker;
- (void)setStickerBackgroundColor:(id)a0;
- (void)setOriginColorForSticker;
- (void)setStickerColor:(id)a0;
- (void)setStickerFont:(id)a0 effectId:(id)a1 resourceId:(id)a2;
- (BOOL)hasValidCaptions;
- (id)addAutoCaptionsWithConfig:(id)a0;
- (id)textStickerOperator;
- (void)removeCaptionsSticker:(long long)a0;
- (void)addStickerViewWithConfig:(id)a0;
- (id)stickerDataWithStickerId:(id)a0;
- (void)setOriginFontForSticker;
- (void)removeCaptionsStickerExtra;
- (void)setTextContentWithUUID:(id)a0 content:(id)a1;
- (void)setTextContentTimeRangeUUID:(id)a0 startTime:(double)a1 duration:(double)a2;
- (void)removeCaptionWithId:(id)a0 source:(long long)a1;
- (void)setSticker:(id)a0 layer:(long long)a1;
- (id)stickerViewWithId:(id)a0;
- (void)setSticker:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)setSticker:(id)a0 rotation:(double)a1;
- (void)setSticker:(id)a0 scale:(double)a1;
- (void)setSticker:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)addAutoCaptionsWithConfigList:(id)a0;
- (void)setupUIConfig:(id)a0 stickerId:(id)a1 abkConfig:(id)a2;
- (id)autoCaptionStickers;
- (void)removeStickerViewWithId:(id)a0;
- (id)autoCaptionExtraStickers;
- (void)removeTextContentWithUUID:(id)a0;
- (id)textStickerOperatorWithUUID:(id)a0;
- (id)textStickerOperatorForPlaying;
- (struct CGPoint { double x0; double x1; })absolutePointWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_renderExtraStickerViewWithSticker:(id)a0;
- (unsigned long long)gestureBlockType;
- (id)currentCaptionId;
- (void)addAutoCaptionWithStickerConfig:(id)a0;
- (id)stickerForPlayingForceSearch;
- (void)setStickerStyle:(unsigned long long)a0;
- (void)setHighLightRangeForUUID:(id)a0 Range:(id)a1;
- (id)textStickerIdForPlaying;
- (id)initWithServiceProvider:(id)a0 captionSource:(long long)a1;
- (void)setStickerBorderColor:(id)a0;
- (void)setStickerRadius:(double)a0;
- (BOOL)hasStickerWithStickerId:(id)a0;
- (void).cxx_destruct;

@end
