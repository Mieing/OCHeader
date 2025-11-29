@class NSString, AWEIMComponentManager;

@interface AWEIMQuoteReplyDetailStyleComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMQuoteReplyDetailStyleInterface>

@property (retain, nonatomic) NSString *referUserNickName;
@property (nonatomic) BOOL hasFetchNickName;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateProps;
- (id)quoteReplyBubbleView;
- (void)setupQuoteTitle;
- (BOOL)p_isPublishMessageScene;
- (void)p_fetchReferUserNickName;
- (BOOL)p_isCombineShareScene;
- (void).cxx_destruct;

@end
