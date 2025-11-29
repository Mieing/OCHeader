@class NSString;

@interface AWEEcomAISearchSSECmdLocationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *layerId;
@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *cardId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
