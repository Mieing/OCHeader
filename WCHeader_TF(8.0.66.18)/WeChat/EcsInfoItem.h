@class NSString;

@interface EcsInfoItem : MMObject

@property (nonatomic) int cardType;
@property (retain, nonatomic) NSString *realAppId;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long bulkId;
@property (retain, nonatomic) NSString *ecsJumpInfoBase64;
@property (retain, nonatomic) NSString *ecmsgSignature;
@property (retain, nonatomic) NSString *sceneNote;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (BOOL)isBulkBuy;
- (void).cxx_destruct;

@end
