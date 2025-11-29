@class NSArray, NSString, MMPageSheetAdapter;

@interface WCMomentsGroupDetailViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate>

@property (retain, nonatomic) NSArray *contactDataList;
@property (retain, nonatomic) NSString *viewControllerTitle;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initTableHeaderView;
- (double)getContentViewY;
- (double)getTableViewHeight;
- (id)getReloadContactDataList;
- (void)onDismissBarButtonPress:(id)a0;
- (void).cxx_destruct;

@end
