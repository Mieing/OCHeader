@class NSString;

@interface BDECPigeonBizRoleInfoModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *nickName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
