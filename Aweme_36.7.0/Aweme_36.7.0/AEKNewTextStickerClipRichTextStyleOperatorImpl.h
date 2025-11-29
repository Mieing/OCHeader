@class UIColor, NLERichTextStyle_OC, NSString, NLETextClip_OC;
@protocol AEKNewTextStickerClipRichTextStyleData;

@interface AEKNewTextStickerClipRichTextStyleOperatorImpl : AEKBaseRenderEditor <AEKNewTextStickerClipRichTextStyleData, AEKNewTextStickerClipRichTextStyleOperator>

@property (retain, nonatomic) NLETextClip_OC *textClip;
@property (retain, nonatomic) NLERichTextStyle_OC *style;
@property (nonatomic) long long index;
@property (readonly, nonatomic) long long startIndex;
@property (readonly, nonatomic) long long endIndex;
@property (readonly, nonatomic) long long fontSize;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) long long shadowDistance;
@property (readonly, nonatomic) long long shadowAngle;
@property (readonly, nonatomic) long long shadowAlpha;
@property (readonly, nonatomic) BOOL isFlowerEffectStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerClipRichTextStyleData> data;

- (id)setShadowAngle:(double)a0;
- (id)setShadowDistance:(long long)a0;
- (id)initWithTextClip:(id)a0 style:(id)a1 index:(unsigned long long)a2 baseData:(id)a3 subscriberProvider:(id)a4 coreUnit:(id)a5;
- (id)setBorderColor:(id)a0;
- (void).cxx_destruct;
- (id)remove;
- (id)setEndIndex:(long long)a0;
- (id)setShadowAlpha:(double)a0;
- (id)setBorderWidth:(double)a0;
- (id)setTextColor:(id)a0;
- (id)setShadowColor:(id)a0;
- (id)setStartIndex:(long long)a0;
- (id)setFontSize:(long long)a0;

@end
