@class NSString, NSDictionary;

@interface AWEJSNetworkJsonRequest : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *header;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
