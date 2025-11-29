@class NSString;

@interface WCFinderTopicShareLocationItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSString *poiClassifyId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
