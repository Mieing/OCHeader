@class NSString;

@interface AWECMCCPcIdResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *systemTime;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *expandParams;
@property (copy, nonatomic) NSString *resultCode;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *pcId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
