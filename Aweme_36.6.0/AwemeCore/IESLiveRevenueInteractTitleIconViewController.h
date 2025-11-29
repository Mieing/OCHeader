@class NSString, UIView;
@protocol IESLiveHybridContainerFactoryAdapter, IESHYContainerProtocol;

@interface IESLiveRevenueInteractTitleIconViewController : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (copy, nonatomic) NSString *schemaURL;

- (void)dismissVc;
- (id)initWithDIContext:(id)a0 schemaURL:(id)a1;
- (void)setupHybridView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
