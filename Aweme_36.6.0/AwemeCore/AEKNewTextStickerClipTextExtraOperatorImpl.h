@class NSString, NLETextClip_OC, NLETrackSlot_OC;
@protocol AEKNewTextStickerClipTextExtraData;

@interface AEKNewTextStickerClipTextExtraOperatorImpl : AEKBaseRenderEditor <AEKNewTextStickerClipTextExtraData, AEKNewTextStickerClipTextExtraOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLETextClip_OC *textClip;
@property (readonly, nonatomic) unsigned long long initLineCount;
@property (readonly, nonatomic) NSString *customBackgroundColorHexString;
@property (readonly, nonatomic) NSString *customTextColorHexString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerClipTextExtraData> data;

- (id)setCustomTextColorHexString:(id)a0;
- (id)setCustomBackgroundColorHexString:(id)a0;
- (id)setInitLineCount:(unsigned long long)a0;
- (id)initWithSlot:(id)a0 textClip:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;

@end
