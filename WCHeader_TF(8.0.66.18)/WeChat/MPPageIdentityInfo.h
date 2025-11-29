@class NSString;

@interface MPPageIdentityInfo : NSObject <NSCopying, PBCoding>

@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *idx;
@property (nonatomic) unsigned int itemShowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_itemShowType;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXML;
- (id)genIdentifierString;
- (void).cxx_destruct;

@end
