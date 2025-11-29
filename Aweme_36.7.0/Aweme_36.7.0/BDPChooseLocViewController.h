@class UIImageView, BDPChoosePositionPluginModel, UITableView, NSObject, UIViewController, UIButton, UIView, MKAnnotationView, NSString, UITextField, NSArray, MKMapView, BDPChooseLocUserLocAnnotation, BDPLoadingAnimationView;
@protocol OS_dispatch_queue;

@interface BDPChooseLocViewController : BDPViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UIGestureRecognizerDelegate> {
    BOOL _needUpdateUserLoc;
    BOOL _isSearchViewInit;
    UIView *_defaultView;
    UIButton *_userLocButton;
    UIImageView *_selectedIcon;
    UIImageView *_shadowImageView;
    MKMapView *_mapView;
    MKAnnotationView *_userAnnotationIcon;
    long long _searchMode;
    BDPChooseLocUserLocAnnotation *_pointAnno;
    long long _tableViewStyle;
    long long _regionChangeMode;
    double _lastContentOffset;
    UIView *_defSnapshotView;
    UIView *_seaSnapshotView;
    UIButton *_sendButton;
    UIButton *_cancleButton;
    BDPChoosePositionPluginModel *_cpLoc;
}

@property (nonatomic) BOOL scrollToEnd;
@property (retain, nonatomic) UIView *searchView;
@property (retain, nonatomic) UITextField *searchText;
@property (retain, nonatomic) id subscribeHeadingToken;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } userLoc;
@property (nonatomic) long long page;
@property (nonatomic) long long selectRow;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL requiredName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) UITableView *locTableView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingView;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (nonatomic) BOOL isMapCanRender;
@property (retain, nonatomic) UIViewController *appController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSearchView;
- (void)textFieldBecomeFirstResponder;
- (void)onClickCancleButton;
- (id)initWithModel:(id)a0 resultCallback:(id /* block */)a1;
- (void)setupOther;
- (void)setupCancleView;
- (void)onClickUserLocButton;
- (void)onClickConfirmButton;
- (void)refreshCurrentLocation;
- (void)startSubscribeHeading;
- (id)initWithModel:(id)a0 requiredName:(BOOL)a1 resultCallback:(id /* block */)a2;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupTableView;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapViewWillStartRenderingMap:(id)a0;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)updateNavigationTitle;

@end
