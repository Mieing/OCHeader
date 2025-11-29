@class UIView, GetProfileInfoResponse_RelievedBuyInfo, WAProfileServiceHeaderView;

@interface WAProfileServiceViewController : ZZFLEXCollectionViewController

@property (retain, nonatomic) WAProfileServiceHeaderView *headerView;
@property (retain, nonatomic) UIView *halfAdapterHeaderView;
@property (copy, nonatomic) id /* block */ halfAdapterCloseAction;
@property (retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *buyInfo;

+ (double)viewHeightByBuyInfo:(id)a0;

- (id)initWithBuyInfo:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)reloadUI;
- (id)halfAdapterHeaderWithCloseAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
