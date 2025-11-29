@class NSString, NSDictionary;

@interface AWEClientAILLMAction : NSObject

@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
