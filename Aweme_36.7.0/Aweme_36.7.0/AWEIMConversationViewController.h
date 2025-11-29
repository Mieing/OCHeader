@class AWEIMConversationContext, NSString;

@interface AWEIMConversationViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency, IESIMConversationViewControllerProtocol>

@property (retain, nonatomic) AWEIMConversationContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aIESIMConversationComponentsAdapterClass;

- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (id)imComponentContext;
- (id)p_componentsNameArrayWithContext:(id)a0;
- (id)p_lazyComponentsNameWithContext:(id)a0;
- (id)aIESIMConversationComponentsAdapter;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
