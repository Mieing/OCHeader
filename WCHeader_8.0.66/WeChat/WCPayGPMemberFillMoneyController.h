@class WCPayGPLaunchParamInvalidTipsView, WCPayGPMemberFillMoneyView;
@protocol WCPayGPMemberFillMoneyControllerDelegate;

@interface WCPayGPMemberFillMoneyController : WCPayBaseViewController

@property (weak, nonatomic) id<WCPayGPMemberFillMoneyControllerDelegate> delegate;
@property (retain, nonatomic) WCPayGPMemberFillMoneyView *contentView;
@property (retain, nonatomic) WCPayGPLaunchParamInvalidTipsView *paramInvalidTipsView;
@property (nonatomic) BOOL bIsAmountInvalid;

- (void)viewDidLoad;
- (void)setupReportData;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupContentView;
- (void)refreshMemberFillMoneyControllerWithSelectedContact:(id)a0 withUserPayAmountDict:(id)a1;
- (void)cancelSelectMember;
- (void)finishSelectMember;
- (void)handleContentViewCancelSelectMember;
- (void)handleContentViewFinishSelectMember:(id)a0 withUserPayAmountDict:(id)a1;
- (void)handleContentViewSelectMemberChange:(id)a0;
- (void)showInvalidTipsViewWithContent:(id)a0;
- (void)hideInvalipTipsView;
- (void).cxx_destruct;

@end
