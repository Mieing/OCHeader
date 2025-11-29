@class MMFinderLiveCreateLotteryTableHeaderView, UIView, MMUIButton, NSString, CAShapeLayer, MMFinderLiveCreateLotteryViewModel, MMFinderLiveChooseClarityViewNavBar, MMUILabel, MMTableView, NSIndexPath;
@protocol UITableViewDelegate, UITableViewDataSource, MMFinderLiveCreateLotteryOperationViewDelegate;

@interface MMFinderLiveCreateLotteryOperationView : MMPageSheetBaseView <MMFinderLiveCreateLotteryOperationViewDelegate>

@property (weak, nonatomic) id<MMFinderLiveCreateLotteryOperationViewDelegate, UITableViewDelegate, UITableViewDataSource> operationDelegate;
@property (retain, nonatomic) MMFinderLiveCreateLotteryViewModel *lotteryGetPrizeMethodViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar;
@property (retain, nonatomic) MMTableView *lotteryMethodTableView;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (nonatomic) long long locationId;
@property (retain, nonatomic) MMFinderLiveCreateLotteryTableHeaderView *headerView;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMUILabel *leftLabel;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) BOOL noneData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCreateLotteryOperationView:(id)a0;

- (void)updateTableviewWithCount:(long long)a0 locationId:(long long)a1;
- (void)updateNoneDataView:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pageSheetDidRotation;
- (void)scrollToRowAtIndexPath:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)pageSheetDidAppear;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (double)getCurrentHeight;
- (double)getLotteryTableHeight;
- (void)createLotteryClick;
- (void).cxx_destruct;

@end
