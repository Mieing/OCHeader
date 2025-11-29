@class WCFinderProfileStoreAngel, NSString;

@interface WCFinderProfileStorePage : WCFinderStreamProfileViewPage <WCFinderProfileStorePageModelDelegate>

@property (retain, nonatomic) WCFinderProfileStoreAngel *angel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useCustomBackgroundColor;
- (id)loadView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)pageSizeDidChanged;
- (void)reloadData;
- (void)onStorePageModelDataChanged:(id)a0;
- (void).cxx_destruct;

@end
