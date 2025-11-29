@class UILabel, UIView, NSString, WCFinderLocationSelectItem, UITableView, NSMutableArray, MMUIButton, WCTimelinePOIPickerViewController;
@protocol WCFinderLocationSelectHalfVCDelegate;

@interface WCFinderLocationSelectHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCTimelinePOIPickerViewControllerDelegate>

@property (retain, nonatomic) UILabel *pageTitle;
@property (retain, nonatomic) UILabel *pageDesc;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIButton *submitBtn;
@property (retain, nonatomic) NSMutableArray *displayItems;
@property (retain, nonatomic) WCFinderLocationSelectItem *selectedItem;
@property (retain, nonatomic) WCTimelinePOIPickerViewController *poiPickerViewController;
@property (nonatomic) BOOL submitting;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL pageExpReported;
@property (nonatomic) int enterCommentScene;
@property (nonatomic) BOOL pickedCustomLocation;
@property (weak, nonatomic) id<WCFinderLocationSelectHalfVCDelegate> selectDelegate;
@property (copy, nonatomic) id /* block */ submitBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithRecommendLocations:(id)a0 commentScene:(int)a1;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)baseInit;
- (void)setupUI;
- (void)updateUI;
- (double)getMaxHalfScreenHeight;
- (double)expectedHalfScreenHeight;
- (void)viewDidTransitionToNewSize;
- (void)selectItem:(id)a0;
- (void)poiClickToSelectCustom;
- (void)updateRecommendLocations:(id)a0;
- (void)reportPageExpose;
- (id)reportParamsIncludePOIInfo:(BOOL)a0;
- (void)onSubmitButtonClicked:(id)a0;
- (void)onCancelButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onPOIPickerFinished:(id)a0;
- (void).cxx_destruct;

@end
