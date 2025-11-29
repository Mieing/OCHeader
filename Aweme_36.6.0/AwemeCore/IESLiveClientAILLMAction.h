@class NSString;

@interface IESLiveClientAILLMAction : NSObject <IESLiveClientAILLMActionProtocol>

@property (copy, nonatomic) NSString *sceneModelName;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
