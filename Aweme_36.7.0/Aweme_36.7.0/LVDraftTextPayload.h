@class NSString, LVPoint, NSArray;

@interface LVDraftTextPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialText> { struct MaterialText *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } shadowPoint;
@property (nonatomic) double lineGap;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double backgroundAlpha;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double boldWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long checkFlag;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *fallbackFontPath;
@property (copy, nonatomic) NSString *fontCategoryID;
@property (copy, nonatomic) NSString *fontCategoryName;
@property (copy, nonatomic) NSString *fontEffectID;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontPath;
@property (copy, nonatomic) NSString *fontResourceID;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontTitle;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic) long long italicDegree;
@property (copy, nonatomic) NSString *ktvColor;
@property (nonatomic) long long layerWeight;
@property (nonatomic) double letterSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowAngle;
@property (copy, nonatomic) NSString *shadowColor;
@property (nonatomic) double shadowDistance;
@property (retain, nonatomic) LVPoint *shadowPointInfo;
@property (nonatomic) double shadowSmoothing;
@property (nonatomic) BOOL shapeFlipX;
@property (nonatomic) BOOL shapeFlipY;
@property (copy, nonatomic) NSString *styleName;
@property (nonatomic) long long subType;
@property (nonatomic) double textAlpha;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSArray *textToAudioIds;
@property (nonatomic) long long typesetting;
@property (nonatomic) BOOL underline;
@property (nonatomic) double underlineOffset;
@property (nonatomic) double underlineWidth;
@property (nonatomic) BOOL useEffectDefaultColor;

+ (double)textVEVersion;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialText> { struct MaterialText *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnotherWithID:(id)a0;
- (struct shared_ptr<CutSame::MaterialText> { struct MaterialText *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 payloadID:(id)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialText> { struct MaterialText *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
