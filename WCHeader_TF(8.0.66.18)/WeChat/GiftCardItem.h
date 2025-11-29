@class NSString;

@interface GiftCardItem : MMObject <PBCoding, NSCopying>

@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *recvDigest;
@property (retain, nonatomic) NSString *sendDigest;
@property (retain, nonatomic) NSString *backgroundPicUrl;
@property (retain, nonatomic) NSString *titleColorStr;
@property (retain, nonatomic) NSString *descColorStr;
@property (nonatomic) unsigned int ver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_orderId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
