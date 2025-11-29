@class NSString, NSDictionary, AWEAwemeModel, AWEShowEntertainmentCommentDataController, UIView, UIScrollView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEShowEntertainmentCommentViewController : UIViewController <BDXContainerLifecycleProtocol, AWEShowEntCommentTabViewControllerProtocol>

@property (retain, nonatomic) AWEShowEntertainmentCommentDataController *dataController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (copy, nonatomic) NSDictionary *lynxDataDic;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isWhiteTheme;
@property (nonatomic) BOOL isContainerViewFinishLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ scrollViewDidUpdate;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerDidPageUpdate:(id)a0;
- (id)getScrollView;
- (id)initWithAwemeModel:(id)a0;
- (void)updateCommentPanelWhiteThemeState:(BOOL)a0;
- (void)updateCommentPanelFullScreenState:(BOOL)a0;
- (id)initWithAwemeModel:(id)a0 logExtra:(id)a1;
- (void)updateInsertData:(id)a0;
- (void)requestEntertainmentCommentTabData;
- (id)getEnvironmentConfig;
- (id)getLynxSchema:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
