@class NSString;

@interface AWEIMLifeServiceChatMenuAuditInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long auditStatus;
@property (copy, nonatomic) NSString *auditMsg;
@property (copy, nonatomic) NSString *auditDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
