@class UIView, MMFinderLiveLotteryGetPrizeMethodDataItem, NSIndexPath, MMFinderLiveLotteryMethodOperationViewNavBar, NSString, CAShapeLayer, MMFinderLiveLotteryGetPrizeMethodViewModel, MMTableView;
@protocol MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate;

@interface MMFinderLiveLotteryGetPrizeMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryGetPrizeMethodDelegate>

@property (retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodViewModel *lotteryGetPrizeMethodViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveLotteryMethodOperationViewNavBar *navBar;
@property (retain, nonatomic) MMTableView *lotteryMethodTableView;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (nonatomic) long long previousOrientation;
@property (retain, nonatomic) MMFinderLiveLotteryGetPrizeMethodDataItem *selectItem;
@property (weak, nonatomic) id<MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pageSheetDidRotation;
- (id)initWithLotteryMethodData:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateData:(id)a0;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (double)getLotteryTableHeight;
- (id)lotteryMethodTableViewModel;
- (void)didSelectRowWithItem:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
