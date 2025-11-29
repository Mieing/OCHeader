@class NLETrack_OC, NSString, NSArray, NLETrackSlot_OC;
@protocol AEKNewTextStickerExtraData;

@interface AEKNewTextStickerExtraOperatorImpl : AEKBaseRenderEditor <AEKNewTextStickerExtraData, AEKNewTextStickerExtraOperator>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, copy, nonatomic) NSString *presetUUID;
@property (readonly, nonatomic) BOOL isWordSyncTTS;
@property (readonly, nonatomic) BOOL isAIWriting;
@property (readonly, nonatomic) NSString *aiWritingOriginalText;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originalDuration;
@property (readonly, nonatomic) double speechSpeed;
@property (readonly, nonatomic) NSArray *lineDurationList;
@property (readonly, nonatomic) NSString *effectId;
@property (readonly, nonatomic) NSArray *textTemplateTagList;
@property (readonly, nonatomic) double imagePixelWidth;
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
@property (readonly, nonatomic) id<AEKNewTextStickerExtraData> data;

- (id)setAIWritingOriginalText:(id)a0;
- (id)setCaptionSource:(long long)a0;
- (id)setTextOnImageFontSize:(double)a0;
- (BOOL)hasTextTemplateFeature:(unsigned long long)a0;
- (id)setIsAIWriting:(BOOL)a0;
- (id)initWithTrack:(id)a0 slot:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setImagePixelWidth:(double)a0;
- (id)setLineDurationList:(id)a0;
- (void)updateStickerKeywordFromTextProtocol:(id)a0;
- (void).cxx_destruct;
- (id)setOriginalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
