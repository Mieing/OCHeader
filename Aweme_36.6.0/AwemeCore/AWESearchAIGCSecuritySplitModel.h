@class NSString, AWESearchAIGCSecurityInfoModel;

@interface AWESearchAIGCSecuritySplitModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchAIGCSecurityInfoModel *securityInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)securityInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
