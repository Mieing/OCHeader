@class GameInteractContentServer, NSString, GCTableViewSecionModel, GameLifeNotifyInteractiveMsgCell;

@interface GameCenterMsgListInteractTabViewController : GameCenterMsgListBaseTabViewController <GCInteractCellDelegate, IGameCenterMsgNotifyExt>

@property (retain, nonatomic) GCTableViewSecionModel *noticeSectionModel;
@property (retain, nonatomic) GameInteractContentServer *interActServer;
@property (retain, nonatomic) GameLifeNotifyInteractiveMsgCell *noticeCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)unregisterExtension;
- (void)viewDidLoad;
- (unsigned int)showType;
- (Class)cellClassType;
- (id)cellReuseIdentifier;
- (id)msgListName;
- (BOOL)isNoticeSection:(unsigned long long)a0;
- (id)getInteractCellModelForMsgContent:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)beginSectionModelArray;
- (id)subClassHandleCellForRowAtIndexPath:(id)a0;
- (void)updateNoticeCellRedInfo;
- (void)subClassHandleWillDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)subClassHandleDidSelectRowAtIndexPath:(id)a0;
- (void)onLoadNewList:(id)a0;
- (void)handleContentInfoUpdate:(id)a0;
- (void)handleBatchGetContentInfoByContentIdResponse:(id)a0;
- (void)onGameCenterMessageRedPointInfoChange:(id)a0;
- (void)reloadCellModel:(id)a0;
- (BOOL)handleResponse:(id)a0 cellModel:(id)a1 successBlock:(id /* block */)a2;
- (void)didClickFollowBtnWithCellModel:(id)a0;
- (void)didTapHeadWithCellModel:(id)a0;
- (void)onConfirmFollow:(BOOL)a0 cellModel:(id)a1;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 handler:(id /* block */)a3 btnTitle:(id)a4 handler:(id /* block */)a5;
- (void)didClickVoteBtnWithCellModel:(id)a0;
- (void)didClickReplyBtnWithCellModel:(id)a0;
- (void)didClickJumpAllBtnWithCellModel:(id)a0;
- (void)checkShowEmpty;
- (void).cxx_destruct;

@end
