@class NSString;

@interface AWEPOIDouDiscountTabModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *douDiscountID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rankCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
