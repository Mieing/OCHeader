@class AWEScreenCastInnerListDataController, NSArray, NSDictionary, AWEAwemeModel, AWEScreenCastInnerPageContext, NSString, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEScreenCastInnerListViewController : UIViewController <AWEAwemeDetailTableViewControllerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController;
@property (retain, nonatomic) AWEScreenCastInnerListDataController *dataController;
@property (retain, nonatomic) NSDictionary *paramDictionary;
@property (retain, nonatomic) NSArray *initialModelList;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (nonatomic) BOOL recommendToastPopped;
@property (nonatomic) BOOL firstVideoPlayed;
@property (retain, nonatomic) AWEScreenCastInnerPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)videoPlayerDidReadyForDisplay:(id)a0;
- (BOOL)transition_enableEdgeBackWithGestureRecognizer:(id)a0;
- (void)configWithParams:(id)a0;
- (void)configUI;
- (id)initWithAwemeModelList:(id)a0 fromModel:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
