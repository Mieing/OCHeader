@class NSString;

@interface EcsGiftAddress : MMObject <NSCopying>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *provinceName;
@property (retain, nonatomic) NSString *cityName;
@property (retain, nonatomic) NSString *countyName;
@property (retain, nonatomic) NSString *detailInfo;
@property (retain, nonatomic) NSString *nationalCode;
@property (retain, nonatomic) NSString *telNumber;
@property (retain, nonatomic) NSString *houseNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
