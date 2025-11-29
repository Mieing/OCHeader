@class NSString, NSDictionary;

@interface IESLLPOIBCMModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *page;
@property (copy, nonatomic) NSDictionary *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
