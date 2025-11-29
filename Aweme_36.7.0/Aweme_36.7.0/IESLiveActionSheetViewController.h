@class NSString, NSArray, IESLiveActionSheetAnimation, UIView, UILabel, UITableView;

@interface IESLiveActionSheetViewController : UIViewController <UIViewControllerTransitioningDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *cancelTitleText;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *asyncDisplayItems;
@property (retain, nonatomic) IESLiveActionSheetAnimation *animator;
@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *cancelView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) BOOL cellOptimizeEnable;
@property (copy, nonatomic) id /* block */ closeBtnClickCallback;
@property (nonatomic) long long separatorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLandScape;
- (id)initWithCloseTitle:(id)a0;
- (id)initWithTitle:(id)a0 closeTitle:(id)a1;
- (void)addAsyncDisplayItem:(id)a0;
- (void)reloadWithNewAvailableAsyncDisplayItemsCount:(long long)a0;
- (void)dismissViewControllerWithSlectionItem:(id)a0;
- (BOOL)exceedMaxHeight;
- (double)viewSpacing;
- (double)itemsViewHeight;
- (double)cancelViewHeight;
- (double)paddingBetweenCloseAndContainer;
- (double)topMarginForTitle;
- (double)maxViewHeight;
- (void)dismiss;
- (id)transitioningDelegate;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)bottomMargin;
- (long long)modalPresentationStyle;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)animationControllerForDismissedController:(id)a0;
- (double)titleHeight;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)show;
- (double)cellHeight;
- (double)viewHeight;
- (double)viewWidth;
- (double)titleViewHeight;
- (void)setUpUI;

@end
