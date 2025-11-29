@class NSString, AWEEcomAISearchSSECmdArgsModel, NSDictionary;

@interface AWEEcomAISearchSSECmdModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cmd;
@property (retain, nonatomic) AWEEcomAISearchSSECmdArgsModel *args;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)argsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
