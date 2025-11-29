@class AWEIMActionSheetItemModel, AWEIMMessageConversation, NSString;
@protocol AWEIMMessageDataProtocol;

@interface AWEIMMessageListActionDeleteComponent : AWEIMComponentBase <AWEIMMessageListActionDeleteInterface>

@property (retain, nonatomic) AWEIMActionSheetItemModel *deleteItemModel;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_reportDelete:(id)a0;
- (void)p_bizTrackDeleteMsg:(id)a0 deleteCount:(long long)a1;
- (void)p_reportMultipleDelegateWithCount:(long long)a0;
- (void)p_onDeleteItemTapped;
- (void).cxx_destruct;

@end
