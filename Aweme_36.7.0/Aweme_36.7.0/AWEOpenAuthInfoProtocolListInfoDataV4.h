@class NSString;

@interface AWEOpenAuthInfoProtocolListInfoDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoProtocolListInfoDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *protocolTitle;
@property (copy, nonatomic) NSString *protocolPage;
@property (copy, nonatomic) NSString *protocolUrl;
@property (copy, nonatomic) NSString *protocolDetailTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
