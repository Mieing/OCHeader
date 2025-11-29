@class NSString, CContact, MMUIView, ChatroomProfileView;
@protocol WCPayGPLaunchConfirmViewDelegate;

@interface WCPayGPLaunchConfirmView : MMUIView

@property (weak, nonatomic) id<WCPayGPLaunchConfirmViewDelegate> delegate;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *theme;
@property (nonatomic) BOOL bChangeHeight;
@property (nonatomic) double originHeight;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIView *chatroomContentView;
@property (retain, nonatomic) ChatroomProfileView *chatroomInfoView;

- (void)setupSubview;
- (void)setupContentView;
- (void)setupHeaderContent;
- (void)setupCenterContent;
- (void)setupBottomContent;
- (id)genNewBigButton;
- (double)getChatroomContentViewMaxHeight;
- (void)showView;
- (void)hideView;
- (void)onCancel;
- (void)onConfirm;
- (void)initPreViewAndBarView:(id)a0 ContentView:(id)a1;
- (void)viewChatroomProfile:(id)a0;
- (void)showPreViewAnimate;
- (void)onPressBackBtn;
- (void).cxx_destruct;

@end
