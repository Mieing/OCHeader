@class NSString, NSDictionary;

@interface AWEKnowledgeStateResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *handlerType;
@property (copy, nonatomic) NSDictionary *resultDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
