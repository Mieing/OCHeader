@class NSString, NSNumber;

@interface IESECVideoPriceInfoItemModel : MTLModel <IESECVideoPriceViewItemProtocol, MTLJSONSerializing>

@property (readonly, nonatomic) NSString *viewPrefix;
@property (readonly, nonatomic) NSString *viewSuffix;
@property (readonly, nonatomic) NSNumber *viewMinPrice;
@property (readonly, nonatomic) NSNumber *viewMaxPrice;
@property (readonly, nonatomic) unsigned long long viewStyleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *styleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
