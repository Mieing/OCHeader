@class DUXActionSheetCellView, NSString, UIView, UIImage, NSArray, DUXActionSheetItemModel, UIButton, NSMutableArray, DUXActionSheetHeaderView, UIScrollView;
@protocol DUXActionSheetDelegate;

@interface DUXActionSheetViewController : UIViewController <DUXActionSheetCellDelegate>

@property (retain, nonatomic) DUXActionSheetHeaderView *headerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) DUXActionSheetCellView *cancelCellView;
@property (retain, nonatomic) NSMutableArray *cellList;
@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double sheetWidth;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomOffset;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *titleIconImage;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) id<DUXActionSheetDelegate> delegate;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) long long type;
@property (retain, nonatomic) DUXActionSheetItemModel *cancelItemModel;
@property (nonatomic) BOOL adaptBottomSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addBinding;
- (void)updateSheetCancelItemTitle:(id)a0 withSubtitle:(id)a1;
- (void)updateMaskLayer;
- (void)didClickCell:(id)a0;
- (void)updateSheetBottomOffset:(double)a0;
- (void)updateSheetWidth:(double)a0 withBottomOffset:(double)a1;
- (id)initWithType:(long long)a0 andMainTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4;
- (void)updateSheetLeftPadding:(double)a0 withRightPadding:(double)a1 withBottomOffset:(double)a2;
- (void)setModelsType;
- (BOOL)padAdapterSmallScreen;
- (double)defaultMaxDialogHeight;
- (id)getDivider;
- (void)maskClicked:(id)a0;
- (void)resetMainSubview;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setupView;

@end
