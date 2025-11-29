@class NSString;

@interface IESLLPOISpuStatInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *clickUserCount;
@property (nonatomic) long long saleCount;
@property (nonatomic) long long saleCountL30;
@property (copy, nonatomic) NSString *saleCountShow;
@property (nonatomic) long long lowPrice;
@property (copy, nonatomic) NSString *discount;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
