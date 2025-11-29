@class NSSortDescriptor, NSString, AWEIMConversationContext, NSDictionary, NSObject, AWEIMComponentManager;
@protocol OS_dispatch_semaphore;

@interface AWEIMInputBarCustomPlaceholderComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMConversationUpdateInputBarCustomPlaceholderService>

@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphoreLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (copy, nonatomic) NSDictionary *priorty_placeholder;
@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)customPlaceholder;
- (void)updateWithPlaceholder:(id)a0 priority:(long long)a1;
- (void)__updateInputBar;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
