@class NSString, NSArray;

@interface AWEToutiaoGoodsButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *microAppUrlString;
@property (copy, nonatomic) NSString *webUrlString;
@property (copy, nonatomic) NSArray *textArray;
@property (nonatomic) unsigned long long orderStatus;
@property (copy, nonatomic) NSString *SKUConfirmButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
