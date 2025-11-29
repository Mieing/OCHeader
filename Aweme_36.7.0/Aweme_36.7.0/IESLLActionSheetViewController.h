@class UIView, NSString, UIImage, NSArray, UIButton, IESLLActionSheetCellView, IESLLActionSheetHeaderView, NSMutableArray, IESLLActionSheetItemModel;
@protocol IESLLActionSheetDelegate;

@interface IESLLActionSheetViewController : UIViewController <IESLLActionSheetCellDelegate>

@property (retain, nonatomic) IESLLActionSheetHeaderView *headerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) IESLLActionSheetCellView *cancelCellView;
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
@property (weak, nonatomic) id<IESLLActionSheetDelegate> delegate;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESLLActionSheetItemModel *cancelItemModel;
@property (nonatomic) BOOL adaptBottomSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickCell:(id)a0;
- (void)updateSheetWidth:(double)a0 withBottomOffset:(double)a1;
- (id)initWithType:(long long)a0 andMainTitle:(id)a1 andSubtitle:(id)a2 andModels:(id)a3 andDelegate:(id)a4;
- (void)updateSheetLeftPadding:(double)a0 withRightPadding:(double)a1 withBottomOffset:(double)a2;
- (void)setModelsType;
- (id)getDivider;
- (void)maskClicked:(id)a0;
- (void)resetMainSubview;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setupView;

@end
