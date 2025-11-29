@class AWEIMMessageConversation, NSString, AWEUserModel, AWEIMLocalGuidanceEntranceCardMessage;

@interface AWEIMLocalGuidanceEntranceCardMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMLocalGuidanceEntranceCardMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isBlockedByTheOtherPerson;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)localFansGroupCardMessageCellTapped;
- (void)__fetchBlockedStatusAndDataAndUpdateLabels;
- (void)__trackInviteFansCardShow;
- (void)__trackShowEvent;
- (void)__fetchFullDetailUserWithCompletion:(id /* block */)a0;
- (void)__fetchDataIfNecessaryWithCompletion:(id /* block */)a0;
- (id)__zeroGroupStr;
- (void)__trackInviteFansCradClick;
- (void)__transferToFansGroupPage;
- (id)__baseTrackParams;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)defaultTitleStr;
- (void).cxx_destruct;
- (id)displayMessage;

@end
