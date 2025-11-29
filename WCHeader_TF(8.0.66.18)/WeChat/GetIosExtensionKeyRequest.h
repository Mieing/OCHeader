@class BaseRequest, NSData;

@interface GetIosExtensionKeyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int extensionSessionType;
@property (retain, nonatomic) NSData *extensionDeviceId;

+ (void)initialize;

- (void)setExtensionDeviceId:(id)a0;
- (id)extensionDeviceId;
- (void)setExtensionSessionType:(unsigned int)a0;
- (unsigned int)extensionSessionType;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
