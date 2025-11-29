@class AWEIMGameInviteMessage, AWEIMMessageConversation, NSString;
@protocol AWEIMGameInviteMessageContentConfiguratorProtocol, IESIMHttpTask, AWEIMGameInviteMessageSchemeTransferCoordinatorProtocol;

@interface AWEIMGameInviteMessageViewModel : NSObject <AWEIMCommonInviteTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMGameInviteMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) id<AWEIMGameInviteMessageSchemeTransferCoordinatorProtocol> schemeTransferCoordinator;
@property (retain, nonatomic) id<AWEIMGameInviteMessageContentConfiguratorProtocol> contentConfigurator;
@property (retain, nonatomic) Class tracker;
@property (retain, nonatomic) id<IESIMHttpTask> httpTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleStringWithMessage:(id)a0;
+ (void)trackInviteCardShowWithMessage:(id)a0 conversationID:(id)a1;
+ (id)schmeTransferCoordinatorWithAwemeType:(long long)a0;
+ (Class)trackerClassWithAwemeType:(long long)a0;

- (id)coverImageUrl;
- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (BOOL)shouldRefreshMessageInfo;
- (void)refreshMessageInfoWithCompletion:(id /* block */)a0;
- (long long)subTitleNumberOfLines;
- (id)supportMenuItems;
- (void)didTapContainerView;
- (void)p_requestMessageInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)detailString;
- (id)titleString;

@end
