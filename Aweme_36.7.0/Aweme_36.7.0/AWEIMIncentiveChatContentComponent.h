@class NSString, AWEIMComponentManager;

@interface AWEIMIncentiveChatContentComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (id)incentiveMessage;
- (void)p_createInvisiblePresenter;
- (id)invisibleAttributeContent;
- (void).cxx_destruct;
- (id)displayMessage;

@end
