@class NSString, WAAppAuthorizationDetailViewModel, LocationRetriever, MMLocatingCoordinateLogic;
@protocol WAAppAuthorizationDetailViewControllerDelegate;

@interface WAAppAuthorizationLocationDetailViewController : ZZFLEXTableViewController <LocationRetrieveDelegate>

@property (nonatomic) unsigned long long authType;
@property (nonatomic) unsigned long long userChooseState;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic;
@property (retain, nonatomic) NSString *locationAddressText;
@property (weak, nonatomic) id<WAAppAuthorizationDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) WAAppAuthorizationDetailViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthType:(unsigned long long)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)fillWithViewModel:(id)a0;
- (void)reloadListUI;
- (BOOL)shouldShowLocationAddress;
- (void)requestLocationAddress;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)requestAddressByLocation:(id)a0;
- (void).cxx_destruct;

@end
