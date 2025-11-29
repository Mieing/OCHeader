@class NSString, CContact, MMTableViewInfo;
@protocol WWKFContactSettingViewControllerDelegate;

@interface WWKFContactSettingViewController : MMUIViewController <WWKFReportLocationMgrExt>

@property (retain, nonatomic) MMTableViewInfo *tableInfo;
@property (retain, nonatomic) CContact *contact;
@property (weak, nonatomic) id<WWKFContactSettingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)reloadData;
- (void)onSwitchAllowReportLocation:(id)a0;
- (void)onShare;
- (void)onSetAllowReportLocation:(id)a0 allowReport:(BOOL)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
