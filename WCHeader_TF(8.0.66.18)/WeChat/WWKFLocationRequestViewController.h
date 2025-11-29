@class NSString, WWKFLocationRequestView, CContact;

@interface WWKFLocationRequestViewController : MMPageSheetBaseViewController <WWKFLocationRequestViewDelegate, WWKFReportLocationMgrExt>

@property (retain, nonatomic) WWKFLocationRequestView *contentView;
@property (retain, nonatomic) CContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onWWKFLocationRequestReject;
- (void)onWWKFLocationRequestApprove;
- (void)onWWKFLocationRequestLearnMore;
- (void)onSetAllowReportLocation:(id)a0 allowReport:(BOOL)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
