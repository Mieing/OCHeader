@class NSArray, NSMutableArray, NSString;

@interface IESIMConversationDefaultComponentConfiguration : NSObject <IESIMConversationComponentConfigurationProtocol>

@property (retain, nonatomic) NSMutableArray *componentArray;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aIESIMConversationComponentsAdapterClass;

- (BOOL)canResolveConfigWithConversation:(id)a0;
- (id)baseModule;
- (id)baseBusinessModule;
- (id)customBusinessModules;
- (id)customBusinessComponents;
- (id)moduleInjectedComponents;
- (id)componentInjectedSubComponents;
- (id)moduleInsertedComponents;
- (id)componentInsertedSubComponents;
- (id)aIESIMConversationComponentsAdapter;
- (void).cxx_destruct;
- (id)init;

@end
