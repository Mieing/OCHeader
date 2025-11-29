@class NSString, NSArray, UIView, UITableView;

@interface CECMomentCameraUserSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *settingModels;
@property (retain, nonatomic) UIView *dragIndicatorView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL hasSetPointOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } originPoint;

- (id)initWithSettingModels:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)viewDidLoad;
- (void)setupUI;
- (void)handlePanGestureRecognizer:(id)a0;

@end
