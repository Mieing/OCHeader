@class NSString;

@interface WCFinderOrderShareItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *products;
@property (nonatomic) unsigned int productsCount;
@property (copy, nonatomic) NSString *priceWording;
@property (copy, nonatomic) NSString *stateWording;
@property (copy, nonatomic) NSString *productImageURL;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned int orderType;
@property (copy, nonatomic) NSString *newPriceWording;
@property (copy, nonatomic) NSString *newStateWording;
@property (nonatomic) BOOL useNewWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_orderID;
+ (void)PBArrayAdd_products;
+ (void)PBArrayAdd_productsCount;
+ (void)PBArrayAdd_priceWording;
+ (void)PBArrayAdd_stateWording;
+ (void)PBArrayAdd_productImageURL;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_orderType;
+ (void)PBArrayAdd_newPriceWording;
+ (void)PBArrayAdd_newStateWording;
+ (void)PBArrayAdd_useNewWording;
+ (void)initialize;
+ (id)shareItemWith:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { } *)a0;
- (id)toXML;
- (id)initWith:(id)a0;
- (void).cxx_destruct;

@end
