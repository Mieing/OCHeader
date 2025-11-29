@class NSString;

@interface ACCAIGCUGCFrameReferenceModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *frameReferenceIdentifier;
@property (nonatomic) unsigned long long referenceMediaType;

+ (id)genderTextWithCheckModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (BOOL)hasNotUpload;
- (id)getFrameReferenceReqParams;
- (void)setFrameReferenceIdentifierAction:(id)a0;
- (void)resetFrameReference;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
