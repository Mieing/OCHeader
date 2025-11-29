@class NSString, NSDictionary;

@interface AWEKnowledgeStateActionConditionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *condition;
@property (copy, nonatomic) NSDictionary *outPut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
