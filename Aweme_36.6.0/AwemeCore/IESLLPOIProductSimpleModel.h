@class NSString;

@interface IESLLPOIProductSimpleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lowestPrice;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
