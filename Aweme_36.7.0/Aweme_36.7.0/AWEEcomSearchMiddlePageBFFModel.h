@class NSDictionary, AWEEcomSearchMiddlePageModelPerformance, NSString;

@interface AWEEcomSearchMiddlePageBFFModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) NSDictionary *response;
@property (retain, nonatomic) AWEEcomSearchMiddlePageModelPerformance *performance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
