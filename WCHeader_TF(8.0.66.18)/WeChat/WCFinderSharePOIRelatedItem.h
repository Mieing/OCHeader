@class NSString;

@interface WCFinderSharePOIRelatedItem : MMObject <NSCopying, WCFinderShareItemProtocol>

@property (copy, nonatomic) NSString *latitudeString;
@property (copy, nonatomic) NSString *longitudeString;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiScaleString;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *infoUrl;
@property (copy, nonatomic) NSString *poiClassifyId;
@property (copy, nonatomic) NSString *poiCategories;

+ (void)PBArrayAdd_latitudeString;
+ (void)PBArrayAdd_longitudeString;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiScaleString;
+ (void)PBArrayAdd_address;
+ (void)PBArrayAdd_infoUrl;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiCategories;
+ (void)initialize;
+ (id)nodeName;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)chatDesc;
- (id)momentsDesc;
- (id)summayText:(id)a0 sender:(id)a1 isChatRoom:(BOOL)a2;
- (id)momentsViewWithWCDataItem:(id)a0;
- (void).cxx_destruct;

@end
