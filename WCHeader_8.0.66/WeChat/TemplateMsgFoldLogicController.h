@class TemplateMsgExposeLogic, NSMutableDictionary, WAContactGetter, CMessageWrap, NSMutableArray;

@interface TemplateMsgFoldLogicController : BaseMsgContentLogicController {
    WAContactGetter *m_contactGetter;
    TemplateMsgExposeLogic *m_exposeLogic;
}

@property (retain, nonatomic) CMessageWrap *firstUnReadMsgWhenInitData;
@property (retain, nonatomic) NSMutableDictionary *unreadFoldMsg;
@property (retain, nonatomic) NSMutableArray *unreadCannotFoldMsg;
@property (retain, nonatomic) CMessageWrap *firstUnreadMessageWrap;

- (void)initViewController;
- (void)dealloc;
- (void)OnTagLink:(id)a0 messageWrap:(id)a1;
- (void)ViewDidAppear;
- (unsigned int)getMsgCountToLoad;
- (BOOL)isShowHeadImage:(id)a0;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (void)onReaderFolderCellWillExpand:(id)a0;
- (void)onReaderFolderCellDidExpand:(id)a0;
- (void)onReaderTemplateMsgFolderCellDidClick:(id)a0;
- (void)onReaderTemplateMsgFolderCellReport:(id)a0 reportItem:(id)a1;
- (void)onReaderFolderCellWillCollapse:(id)a0;
- (void)onReaderFolderCellDidCollapse:(id)a0;
- (void)clickTimeNodeRightButton:(id)a0;
- (void)dataWillInit;
- (id)GetFirstUnReadMessage;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (id)GetDownMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)performDeleteMsg:(id)a0;
- (void)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (BOOL)shouldLocateToFirstMsgWhenViewDidAppear;
- (unsigned int)GetLastLocalID;
- (unsigned int)GetFirstLocalID;
- (id)getEarlierMessageWrapList:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 limit:(int)a3 leftCount:(unsigned int *)a4;
- (id)getLaterMessageWrapList:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 limit:(int)a3 leftCount:(unsigned int *)a4;
- (id)getMsgWrapList:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 limit:(int)a3 leftCount:(unsigned int *)a4 isEarlier:(BOOL)a5;
- (id)handleCombineUnreadMessageWrapList:(id)a0;
- (BOOL)canCombineMessageWrap:(id)a0;
- (BOOL)isUnreadMsg:(id)a0;
- (void)openTemplateSubViewController:(id)a0;
- (void)OpenContactInfo:(id)a0;
- (void)OpenChatView:(id)a0;
- (void)onExposeTemplateMsg:(id)a0 extraData:(id)a1;
- (void)onClickMoreForTemplateMsg:(id)a0;
- (void)headerImageClickedWithMsg:(id)a0;
- (void)onOpenWeappProfileWithAppid:(id)a0 appBrandType:(unsigned int)a1 msgWrap:(id)a2;
- (void)OnChangeNotifyStatus:(id)a0 withStatus:(BOOL)a1;
- (void).cxx_destruct;

@end
