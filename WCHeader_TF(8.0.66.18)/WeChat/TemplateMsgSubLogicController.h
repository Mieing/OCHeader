@class TemplateMsgExposeLogic, NSString, WAContactGetter, TemplateMsgSubViewController;

@interface TemplateMsgSubLogicController : BaseMsgContentLogicController {
    WAContactGetter *m_contactGetter;
    TemplateMsgExposeLogic *m_exposeLogic;
}

@property (retain, nonatomic) NSString *templateSessionId;
@property (retain, nonatomic) TemplateMsgSubViewController *templateVC;

- (void)onWillEnterRoom;
- (void)initViewController;
- (void)dealloc;
- (void)setNeedUpdateTitle:(BOOL *)a0;
- (unsigned int)getMsgCountToLoad;
- (BOOL)isShowHeadImage:(id)a0;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (id)GetFirstUnReadMessage;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (id)GetDownMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OpenContactInfo:(id)a0;
- (void)OpenChatView:(id)a0;
- (void)onExposeTemplateMsg:(id)a0 extraData:(id)a1;
- (void)headerImageClickedWithMsg:(id)a0;
- (void)onOpenWeappProfileWithAppid:(id)a0 appBrandType:(unsigned int)a1 msgWrap:(id)a2;
- (void)OnChangeNotifyStatus:(id)a0 withStatus:(BOOL)a1;
- (void)OnTagLink:(id)a0 messageWrap:(id)a1;
- (void).cxx_destruct;

@end
