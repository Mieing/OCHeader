@class NSString;

@interface AWELiveZMAuthResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *zhimaToken;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
