@class UIView, BDPActionSheetCellView, NSString, BDPActionSheetHeaderView, UIImage, NSArray, UIButton, NSMutableArray, BDPActionSheetItemModel;
@protocol BDPActionSheetConfigProtocol, BDPActionSheetDelegate;

@interface BDPActionSheetViewController : UIViewController <BDPActionSheetCellDelegate>

@property (retain, nonatomic) BDPActionSheetHeaderView *headerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) BDPActionSheetCellView *cancelCellView;
@property (retain, nonatomic) NSMutableArray *cellList;
@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *mainView;
@property (nonatomic) double sheetWidth;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomOffset;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *titleIconImage;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) id<BDPActionSheetDelegate> delegate;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) long long type;
@property (retain, nonatomic) BDPActionSheetItemModel *cancelItemModel;
@property (nonatomic) BOOL adaptBottomSafeArea;
@property (retain, nonatomic) id<BDPActionSheetConfigProtocol> configProtocol;
@property (nonatomic) unsigned long long presentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSheetCancelItemTitle:(id)a0 withSubtitle:(id)a1;
- (void)didClickCell:(id)a0;
- (void)updateSheetBottomOffset:(double)a0;
- (void)updateSheetWidth:(double)a0 withBottomOffset:(double)a1;
- (void)animateWithBezierPointOne:(float)a0 pointTwo:(float)a1 pointThree:(float)a2 pointFour:(float)a3 andDuration:(double)a4 andAnimations:(id /* block */)a5 andCompletion:(id /* block */)a6;
- (void)updateSheetLeftPadding:(double)a0 withRightPadding:(double)a1 withBottomOffset:(double)a2;
- (void)setModelsType;
- (id)getDivider;
- (void)maskClicked:(id)a0;
- (void)resetMainSubview;
- (id)initWithType:(long long)a0 andMainTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4 configProtocol:(id)a5;
- (void)presentAsChildOnParentVC:(id)a0 completion:(id /* block */)a1;
- (void)dismissAsChildWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)setupView;

@end
