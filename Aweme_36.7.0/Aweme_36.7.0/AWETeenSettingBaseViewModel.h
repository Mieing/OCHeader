@class NSString, NSArray;
@protocol AWETeenSettingBaseViewModelDelegate;

@interface AWETeenSettingBaseViewModel : NSObject <AWEComplianceMessage, AWESettingViewModelProtocol>

@property (nonatomic) long long colorStyle;
@property (weak, nonatomic) id<AWETeenSettingBaseViewModelDelegate> controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *sectionDataArray;

- (void)listControlDidChange;
- (void)tapTeenagerProtectionCell;
- (void)tapSettingCell;
- (void)tapEyeProtectionCell;
- (void)tapHelpDeskCell;
- (void)tapWalletCell;
- (void)tapBalanceWithdrawCell;
- (void)tapContentPreferCell;
- (void)refreshAllCells;
- (void)viewDidDisapper;
- (id)sectionDataArray;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end
