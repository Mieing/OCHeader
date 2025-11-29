@class NSString;

@interface EmotionDesignerSharedItem : NSObject <PBCoding>

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (retain, nonatomic) NSString *designerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_designerUin;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_designerName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
