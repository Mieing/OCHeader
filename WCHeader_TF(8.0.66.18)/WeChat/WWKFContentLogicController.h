@class NSString, WWKFContentSendMsgInfo;

@interface WWKFContentLogicController : WeixinContentLogicController

@property (nonatomic) BOOL bHasShowQuickSendMsg;
@property (copy, nonatomic) NSString *sessionTitle;
@property (copy, nonatomic) NSString *sessionSubTitle;
@property (retain, nonatomic) NSString *sessionCarryWord;
@property (retain, nonatomic) WWKFContentSendMsgInfo *sendMsgInfo;

- (id)init;
- (id)GetUsrTitle;
- (id)getSubTitle;
- (void)initViewController;
- (void)setNeedUpdateTitle:(BOOL *)a0;
- (id)getLeftBarButton;
- (void)OpenDetailInfo;
- (void)ViewDidInit;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (BOOL)isNeedShowQuickSendMsgView;
- (void)onHideQuickSendSessionMsgBtn;
- (void)onClickQuickSendSessionMsgBtn:(id)a0;
- (id)getInputToolView;
- (void)setCarryWordToInputToolView;
- (void)onWWKFContactUpdated:(id)a0;
- (void)ViewDidAppear;
- (void)OnTagLink:(id)a0 messageWrap:(id)a1;
- (void)onWillPushFromNavigationController;
- (void).cxx_destruct;

@end
