@class MMTableView, MMFinderLiveLotteryMethodOperationTableViewModel, CAShapeLayer, NSString, UIView, NSIndexPath, MMFinderLiveLotteryMethodOperationViewNavBar;
@protocol MMFinderLiveLotteryMethodOperationViewDelegate;

@interface MMFinderLiveLotteryMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryMethodOperationTableDataDelegate>

@property (retain, nonatomic) MMFinderLiveLotteryMethodOperationTableViewModel *lotteryMethodTableViewModel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveLotteryMethodOperationViewNavBar *navBar;
@property (retain, nonatomic) MMTableView *lotteryMethodTableView;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (nonatomic) long long previousOrientation;
@property (weak, nonatomic) id<MMFinderLiveLotteryMethodOperationViewDelegate> operationDelegate;
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
- (void)didSelectRowWithItem:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
