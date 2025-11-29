@class NSString;

@interface AWEPOISpuCustomerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *customerName;
@property (nonatomic) unsigned long long customerSource;
@property (copy, nonatomic) NSString *customerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
