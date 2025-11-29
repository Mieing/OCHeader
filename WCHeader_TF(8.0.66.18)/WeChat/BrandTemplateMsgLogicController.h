@class TemplateMsgExposeLogic, NSString, BrandTemplateMsgContentViewController, TemplateMsgSubLogicEnterParams;

@interface BrandTemplateMsgLogicController : BaseMsgContentLogicController {
    TemplateMsgExposeLogic *m_exposeLogic;
}

@property (retain, nonatomic) NSString *templateSessionId;
@property (retain, nonatomic) TemplateMsgSubLogicEnterParams *enterParams;
@property (retain, nonatomic) BrandTemplateMsgContentViewController *templateVC;

- (void)onWillEnterRoom;
- (void)initViewController;
- (id)pageSheetModeTitle;
- (unsigned int)getMsgCountToLoad;
- (BOOL)CanShowBanner;
- (BOOL)isShowHeadImage:(id)a0;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (id)GetUsrTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (unsigned int)getStartCreateTime;
- (id)GetDownMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (id)filterAndLimitMessagesWithArray:(id)a0 maxCount:(long long)a1;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (void)onExposeTemplateMsg:(id)a0 extraData:(id)a1;
- (void)OnChangeNotifyStatus:(id)a0 withStatus:(BOOL)a1;
- (void)OnTagLink:(id)a0 messageWrap:(id)a1;
- (void).cxx_destruct;

@end
