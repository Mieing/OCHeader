@class NSString, NSNumber, NLEStyleText_OC;

@interface NLETextTemplateClip_OC : NLENode_OC

@property (nonatomic) double aek_fontSize;
@property (nonatomic) double aek_fontScale;
@property (nonatomic) long long aek_textStyle;
@property (retain, nonatomic) NSString *aek_defaultContent;
@property (retain, nonatomic) NSString *aek_placeholderContent;
@property (nonatomic) BOOL aek_isMainTitle;
@property (retain, nonatomic) NSString *aek_originColorHexString;
@property (retain, nonatomic) NSString *aek_originBorderColorHexString;
@property (retain, nonatomic) NSNumber *aek_initNormWidth;
@property (retain, nonatomic) NSNumber *aek_initNormHeight;
@property (retain, nonatomic) NSNumber *aek_initNormCenterOffsetX;
@property (retain, nonatomic) NSNumber *aek_initNormCenterOffsetY;
@property (nonatomic) struct shared_ptr<cut::model::NLETextTemplateClip> { struct NLETextTemplateClip *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long index;
@property (retain, nonatomic) NLEStyleText_OC *contentStyle;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextTemplateClip> { struct NLETextTemplateClip *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
