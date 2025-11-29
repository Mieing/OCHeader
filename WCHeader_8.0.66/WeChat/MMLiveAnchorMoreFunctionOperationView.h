@class MMTableView, NSString, UIView;
@protocol UITableViewDelegate, UITableViewDataSource;

@interface MMLiveAnchorMoreFunctionOperationView : MMPageSheetBaseView

@property (weak, nonatomic) id<UITableViewDelegate, UITableViewDataSource> operationDelegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *mainTableView;
@property (nonatomic) double contentViewHeight;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) double customHeight;
@property (copy, nonatomic) id /* block */ functionOperationViewWillDisappear;

+ (id)getAnchorMoreFunctionOperationView:(id)a0;

- (void)pageSheetDidRotation;
- (void)pageSheetWillAppear;
- (void)updateDelegate:(id)a0;
- (void)updateContentViewHeight:(double)a0;
- (void)updateTitle:(id)a0;
- (void)updateCustomHeight:(double)a0;
- (void)reloadOperationData;
- (void)reloadDataAtIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)pageSheetWillDisappear;
- (void)onCloseButtonTapped;
- (void).cxx_destruct;

@end
