@class NSString;

@interface AWEIMConversationElfBotAssembly : NSObject <AWEIMMessageListModuleAssembly>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;

@end
