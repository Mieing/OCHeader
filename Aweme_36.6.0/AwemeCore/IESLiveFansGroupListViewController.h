@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveFansGroupListViewController : UIViewController

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) NSString *listViewURL;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;

- (void)loadHybridContainer;
- (id)initWithViewSize:(struct CGSize { double x0; double x1; })a0 listViewURL:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
