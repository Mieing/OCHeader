@class NSString;

@interface ACCExtractAIEnhanceAip : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *stepName;
@property (copy, nonatomic) NSString *algoReqJSONStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
