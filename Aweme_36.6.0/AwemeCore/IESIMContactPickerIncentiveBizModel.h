@class AWEIMShareModel;

@interface IESIMContactPickerIncentiveBizModel : IESIMContactPickerContentCellModel_rightButton <AWEIMIncentiveChatServiceMessage>

@property (retain, nonatomic) AWEIMShareModel *shareModel;
@property (nonatomic) long long buttonStatus;
@property (nonatomic) long long cellOrder;

- (id)initWithIdentifier:(id)a0 cellReuseIdentifier:(id)a1;
- (void)incentiveChatService:(id)a0 relationUpdateWithRelationID:(id)a1 conversationID:(id)a2;
- (id)p_getMangoTokenParamsWith:(id)a0;
- (id)p_getActionButtonStatusTrackString;
- (id)p_getEstablishedButtonText;
- (id)p_getInvitingButtonText;
- (id)p_getInviteButtonText;
- (void)updateActionButtonStatus;
- (void)trackCellWillDisplayWithListContext:(id)a0;
- (void)handleActionButtonClickWithListContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)dealloc;

@end
