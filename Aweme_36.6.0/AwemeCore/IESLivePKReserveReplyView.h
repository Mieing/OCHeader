@class NSString, HTSLiveRoom, HTSLiveUser;
@protocol IESLivePKProvider;

@interface IESLivePKReserveReplyView : HTSLivePopUpView

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (weak, nonatomic) id<IESLivePKProvider> provider;
@property (copy, nonatomic) id /* block */ replyReserveBlock;

- (void)onCancelButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 room:(id)a2 provider:(id)a3 diContext:(id)a4;
- (void)onRejectButtonClicked;
- (void)onAgreeButtonClicked;
- (void)trackPKInvitedPopupClick:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
