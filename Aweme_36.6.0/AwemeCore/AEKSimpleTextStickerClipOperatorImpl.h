@class UIColor, NSString, NLEStyleText_OC, NLESegmentTextSticker_OC, AEKFontResource, NLETrackSlot_OC;
@protocol AEKSimpleTextStickerClipData, AEKBaseTextStickerClipExtraData;

@interface AEKSimpleTextStickerClipOperatorImpl : AEKBaseRenderEditor <AEKSimpleTextStickerClipData, AEKSimpleTextStickerClipOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NLESegmentTextSticker_OC *segment;
@property (retain, nonatomic) NLEStyleText_OC *contentStyle;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) AEKFontResource *font;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontScale;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) long long align;
@property (readonly, nonatomic) long long textStyle;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double backgroundRoundRadius;
@property (readonly, nonatomic) NSString *defaultContent;
@property (readonly, nonatomic) BOOL isMainTitle;
@property (readonly, copy, nonatomic) NSString *originColorHexString;
@property (readonly, copy, nonatomic) NSString *originBorderColorHexString;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *placeholderContent;
@property (readonly, nonatomic) id<AEKBaseTextStickerClipExtraData> extra;
@property (readonly, nonatomic) id<AEKSimpleTextStickerClipData> data;

- (id)extraOperator;
- (id)setOriginBorderColorHexString:(id)a0;
- (id)setOriginColorHexString:(id)a0;
- (id)setBackgroundRoundRadius:(double)a0;
- (id)initWithSlot:(id)a0 index:(unsigned long long)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setPlaceholderContent:(id)a0;
- (id)setDefaultContent:(id)a0;
- (id)setBorderColor:(id)a0;
- (void).cxx_destruct;
- (id)setBackgroundColor:(id)a0;
- (id)setFont:(id)a0;
- (id)setContent:(id)a0;
- (id)setTextStyle:(long long)a0;
- (id)setColor:(id)a0;
- (id)setFontSize:(double)a0;
- (id)setFontScale:(double)a0;
- (id)toJsonString;
- (id)setAlign:(long long)a0;

@end
