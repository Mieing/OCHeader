@class NSString, NSDictionary;

@interface AWELuckyCatRequestModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long method;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
