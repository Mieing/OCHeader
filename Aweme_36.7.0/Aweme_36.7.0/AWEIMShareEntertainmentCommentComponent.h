@class NSString, AWEIMEntertainmentCommentShareMessageViewModel, AWEIMComponentManager;

@interface AWEIMShareEntertainmentCommentComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMEntertainmentCommentShareMessageViewModel *messageViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)p_updateProps;
- (void)onClickSharedComment;
- (id)entCommentShareMessage;
- (void).cxx_destruct;
- (id)displayMessage;

@end
