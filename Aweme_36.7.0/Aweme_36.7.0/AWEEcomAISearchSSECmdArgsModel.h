@class NSString, AWEEcomAISearchSSECmdLocationModel;

@interface AWEEcomAISearchSSECmdArgsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *updateId;
@property (retain, nonatomic) AWEEcomAISearchSSECmdLocationModel *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
