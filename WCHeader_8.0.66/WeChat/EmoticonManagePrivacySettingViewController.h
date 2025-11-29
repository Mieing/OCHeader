@class WCTableViewManager, NSString;

@interface EmoticonManagePrivacySettingViewController : MMUIViewController <ILinkEventExt>

@property (retain, nonatomic) WCTableViewManager *tableViewMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)initTableView;
- (void)reloadSectionInfo;
- (void)initFooterView;
- (void)showPrivacyHintPageSheetIfNeeded;
- (void)onRemoteRecommendSwitchChanged:(id)a0;
- (void)onPersonalizedRecommendSwitchChanged:(id)a0;
- (void)onChatContextRecommendSwitchChanged:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
