@class NSArray, NSString;

@interface IESIMConversationSingleComponentConfiguration : IESIMConversationDefaultComponentConfiguration <IESIMConversationComponentConfigurationProtocol>

@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canResolveConfigWithConversation:(id)a0;
- (id)customBusinessModules;
- (id)customBusinessComponents;

@end
