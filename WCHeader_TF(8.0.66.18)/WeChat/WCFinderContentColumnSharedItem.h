@class NSData, NSString;

@interface WCFinderContentColumnSharedItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSData *cardbuffer;
@property (copy, nonatomic) NSString *base64Cardbuffer;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrl_1;
@property (copy, nonatomic) NSString *iconUrl_2;
@property (copy, nonatomic) NSString *iconUrl_3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_iconUrl_1;
+ (void)PBArrayAdd_iconUrl_2;
+ (void)PBArrayAdd_iconUrl_3;
+ (void)PBArrayAdd_cardbuffer;
+ (void)PBArrayAdd_base64Cardbuffer;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)parseStringFieldFromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 key:(id)a1;
- (id)toXML;
- (void)appendXMLNodeForField:(SEL)a0 toXML:(id)a1;
- (id)onlyTitleForShared;
- (void)setCardBufferWithoutBase64:(id)a0;
- (void).cxx_destruct;

@end
