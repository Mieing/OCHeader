@class NSString, NLEStyNewText_OC, NLECaptionDuration_OC, NLERichText_OC, NSNumber, NLECaptionParam_OC;

@interface NLETextClip_OC : NLEStyBasicAttributes_OC

@property (nonatomic) double aek_fontSize;
@property (nonatomic) double aek_fontScale;
@property (nonatomic) long long aek_textStyle;
@property (retain, nonatomic) NSString *aek_defaultContent;
@property (nonatomic) BOOL aek_isMainTitle;
@property (retain, nonatomic) NSString *aek_originColorHexString;
@property (retain, nonatomic) NSString *aek_originBorderColorHexString;
@property (retain, nonatomic) NSString *aek_placeholderContent;
@property (retain, nonatomic) NSNumber *aek_initNormWidth;
@property (retain, nonatomic) NSNumber *aek_initNormHeight;
@property (retain, nonatomic) NSNumber *aek_initNormCenterOffsetX;
@property (retain, nonatomic) NSNumber *aek_initNormCenterOffsetY;
@property (nonatomic) unsigned long long aek_initLineCount;
@property (retain, nonatomic) NSString *aek_customTextColorHexString;
@property (retain, nonatomic) NSString *aek_customBackgroundColorHexString;
@property (nonatomic) struct shared_ptr<cut::model::NLETextClip> { struct NLETextClip *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEStyNewText_OC *contentStyle;
@property (retain, nonatomic) NLERichText_OC *richText;
@property (copy, nonatomic) NLECaptionParam_OC *captionParam;
@property (copy, nonatomic) NLECaptionDuration_OC *captionDuration;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextClip> { struct NLETextClip *x0; struct __shared_weak_count *x1; })a0;
- (id)effectJsonToString;
- (void).cxx_destruct;
- (id)init;

@end
