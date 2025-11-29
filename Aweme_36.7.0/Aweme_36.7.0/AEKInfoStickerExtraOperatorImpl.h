@class NLETrack_OC, NSString, NLETrackSlot_OC;
@protocol AEKInfoStickerExtraData;

@interface AEKInfoStickerExtraOperatorImpl : AEKBaseRenderEditor <AEKInfoStickerExtraData, AEKInfoStickerExtraOperator>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } stickerInitNormCacheSize;
@property (readonly, nonatomic) long long stickerDynamicStatus;
@property (readonly, nonatomic) BOOL disableMove;
@property (readonly, nonatomic) double imagePixelWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKInfoStickerExtraData> data;

- (id)setStickerNormBoxCacheWithCurrentSize:(struct CGSize { double x0; double x1; })a0;
- (id)setStickerDynamicStatus:(long long)a0;
- (id)initWithTrack:(id)a0 slot:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setImagePixelWidth:(double)a0;
- (void).cxx_destruct;

@end
