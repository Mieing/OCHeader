@class MMUILabel, NSString, MMAcceptAgreementCommonHeadView, UIButton;

@interface MMFinderLiveCameraCastVerifyViewController : MMAcceptAgreementBaseViewController <IMMFinderLiveCameraCastMgrExt>

@property (nonatomic) unsigned long long castState;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) MMAcceptAgreementCommonHeadView *commonHeadView;
@property (retain, nonatomic) MMUILabel *cancelCastLabel;
@property (retain, nonatomic) NSString *castTicket;
@property (retain, nonatomic) NSString *headTitleMessage;

- (id)initWithCastTicket:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionBtn;
- (void)layoutCancelCastLabel;
- (void)onCancelCastLabelTapped;
- (void)onCameraCastResult:(long long)a0 message:(id)a1;
- (void)onCancel;
- (void)doAction;
- (void)doConfirm;
- (void).cxx_destruct;

@end
