@class AWEEcomSearchVacantView;

@interface AWESearchPhotoSearchResultsPlaceholderViewController : UIViewController

@property (retain, nonatomic) AWEEcomSearchVacantView *netWorkErrorView;
@property (retain, nonatomic) AWEEcomSearchVacantView *searchEmptyView;
@property (copy, nonatomic) id /* block */ reloadButtonClickCallback;

- (void)setIsSevenPage:(BOOL)a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
