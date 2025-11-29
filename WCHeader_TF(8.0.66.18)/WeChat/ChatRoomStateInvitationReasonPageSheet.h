@class NSString, MMGrowTextView, MMUIView, NSArray, UIButton;
@protocol ChatRoomStateInvitationReasonPageSheetDelegate;

@interface ChatRoomStateInvitationReasonPageSheet : MMPageSheetBaseView <UIScrollViewDelegate, IMMGrowTextViewExt> {
    UIButton *m_sendBtn;
    MMGrowTextView *m_stateInvitationReasonInputView;
    double m_pageSheetContentHeight;
    NSArray *m_arrMemberList;
}

@property (retain, nonatomic) MMUIView *containerView;
@property (weak, nonatomic) id<ChatRoomStateInvitationReasonPageSheetDelegate> invitationReasonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentHeight:(double)a0 arrMemberList:(id)a1;
- (void)dealloc;
- (void)pageSheetWillAppear;
- (BOOL)canBecomeFirstResponder;
- (void)initConfig;
- (void)initView;
- (id)genRightButton;
- (id)genStateInvitationReasonView;
- (void)hideKeyboard;
- (void)onDidSendBtn;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)onTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
