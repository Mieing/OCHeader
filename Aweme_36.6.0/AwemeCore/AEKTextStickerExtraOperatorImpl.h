@class NLETrack_OC, NSString, NLETrackSlot_OC;
@protocol AEKTextStickerExtraData;

@interface AEKTextStickerExtraOperatorImpl : AEKBaseRenderEditor <AEKTextStickerExtraData, AEKTextStickerExtraOperator>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, copy, nonatomic) NSString *presetUUID;
@property (readonly, nonatomic) BOOL isAIWriting;
@property (readonly, nonatomic) double textOnImageFontSize;
@property (readonly, nonatomic) BOOL disableEdit;
@property (readonly, nonatomic) BOOL disableMove;
@property (readonly, nonatomic) BOOL musicShareStoryCustomStickerFlag;
@property (readonly, nonatomic) BOOL musicShareStoryCustomInputStickerFlag;
@property (readonly, copy, nonatomic) NSString *musicShareStoryCustomStickerDefaultTitle;
@property (readonly, nonatomic) long long captionSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKTextStickerExtraData> data;

- (id)setAIWritingOriginalText:(id)a0;
- (id)setCaptionSource:(long long)a0;
- (id)setTextOnImageFontSize:(double)a0;
- (id)setIsAIWriting:(BOOL)a0;
- (id)initWithTrack:(id)a0 slot:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;

@end
