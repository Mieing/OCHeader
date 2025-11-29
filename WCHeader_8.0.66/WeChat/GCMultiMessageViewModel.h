@class GCMultiMessageViewModelConfig, NSString, GCTipLabel, NSMutableArray, GCMultiChannelContainerView;

@interface GCMultiMessageViewModel : NSObject <GCMultiMessageViewModelProtocol, GCMessageViewModeUnreadCntProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *msgViewModelArray;
@property (nonatomic) unsigned long long unreadCnt;
@property (retain, nonatomic) GCTipLabel *unreadCntView;
@property (retain, nonatomic) GCTipLabel *bottomTip;
@property (nonatomic) BOOL hasBtmTip;
@property (retain, nonatomic) GCMultiMessageViewModelConfig *viewModelConfig;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) GCMultiChannelContainerView *multiChannelView;

- (long long)currentChannelId;
- (void)exitViewModel;
- (void)handleReceiveNewMsg:(id)a0;
- (void)handleChatRoomMsg:(id)a0;
- (void)onInputViewAdjustMessageView:(BOOL)a0 topYOfInputView:(double)a1;
- (void)reconfigChatCellForUserName:(id)a0 relayout:(BOOL)a1;
- (void)reloadCellModelInNextLoop:(id)a0;
- (void)setDisableChildViewEvent:(BOOL)a0;
- (void)updatCellModel:(id)a0 withResponse:(id)a1;
- (void)updateCellModel:(id)a0 messageSendStatus:(unsigned long long)a1;
- (void)updateNoticeBarView:(id)a0;
- (void)updateUserDataCell:(id)a0;
- (void)jumpToChannelId:(long long)a0 seq:(unsigned long long)a1;
- (id)bindViewModelConfig;
- (void)loadCachedMsgDataIfNeed;
- (void)loadFirstPageIfNeed;
- (void)onUserDataDictUpdate:(id)a0;
- (void)showBtmTipWithText:(id)a0 handleBlock:(id /* block */)a1;
- (id)viewModelOfChannelId:(long long)a0;
- (void)selectChannelId:(long long)a0;
- (void)removeBtmTip;
- (void)updateMoreMessageReceived:(unsigned long long)a0;
- (void)clearUnreadCnt;
- (id)createUnReadCountLabel;
- (id)createUnReadCountStr;
- (void)updateUnreadCntImage;
- (void)updateUnReadCntText;
- (void)udpateUnreadCntViewShow;
- (void)onUnreadCntViewTaped;
- (id)initWithMultiMessageViewModelConfig:(id)a0;
- (unsigned long long)indexOfChannelId:(long long)a0;
- (void)bindMessageView:(id)a0;
- (id)currentMessageViewModel;
- (void)setSelectedIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
