@class NSString;

@interface AWEOpenAuthInfoProtocolInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *protocolUrl;
@property (copy, nonatomic) NSString *protocolTitle;
@property (copy, nonatomic) NSString *protocolPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
