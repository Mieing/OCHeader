@class NSArray, NSString, MMUIView, UIView, MMTableView;
@protocol RecommendAlreadyHadGroupPageSheetViewDelegate;

@interface RecommendAlreadyHadGroupPageSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *headerTitleView;
@property (retain, nonatomic) MMUIView *bottomToolView;
@property (nonatomic) double targetPageSheetHeight;
@property (retain, nonatomic) UIView *tableViewMaskView;
@property (retain, nonatomic) NSArray *arrRecommendAlreadyHadGroup;
@property (weak, nonatomic) id<RecommendAlreadyHadGroupPageSheetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArrRecommendAlreadyHadGroup:(id)a0 targetPageSheetHeight:(double)a1;
- (void)initConfig;
- (void)initView;
- (void)initHeaderTitleView;
- (void)initTableView;
- (void)initBottomToolView;
- (id)genLinkButton;
- (void)setUpScrollViewGradientLayer;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickOperateButton:(id)a0;
- (void)reportCreatGroupSameRecommendReporSameAddNewGroup;
- (void).cxx_destruct;

@end
