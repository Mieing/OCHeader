@class NSString, AWEIMVideoCommentShareTableViewCellViewModel, AWEIMComponentManager;

@interface AWEIMShareCommentComponent : AWEIMFlexComponent <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMShareCommentInterface, AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMVideoCommentShareTableViewCellViewModel *cellViewModel;
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
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_updateProps;
- (id)commentShareMessage;
- (void)onClickSharedComment;
- (void).cxx_destruct;
- (id)displayMessage;

@end
