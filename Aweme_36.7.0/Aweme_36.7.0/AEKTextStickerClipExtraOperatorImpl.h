@class NSString, NLETextTemplateClip_OC, NLETrackSlot_OC;
@protocol AEKTextStickerClipExtraData;

@interface AEKTextStickerClipExtraOperatorImpl : AEKBaseRenderEditor <AEKTextStickerClipExtraData, AEKTextStickerClipExtraOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLETextTemplateClip_OC *templateClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKTextStickerClipExtraData> data;

- (id)initWithSlot:(id)a0 templateClip:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;

@end
