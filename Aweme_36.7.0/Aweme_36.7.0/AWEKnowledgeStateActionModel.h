@class NSDictionary, NSString;

@interface AWEKnowledgeStateActionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *conditionDic;
@property (copy, nonatomic) NSString *handlerType;
@property (retain, nonatomic) id customValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
