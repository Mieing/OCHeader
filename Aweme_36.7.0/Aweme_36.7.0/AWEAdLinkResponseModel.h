@class NSString, NSNumber, NSDictionary;

@interface AWEAdLinkResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSDictionary *adLinkMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adLinkMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
