@class NSString;

@interface AWEGoodsDiscountLabelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long labelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
