@class NSArray, NSString;

@interface IESECPDPPreloadHTTPResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *productList;
@property (copy, nonatomic) NSString *statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
