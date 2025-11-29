@class UIImageView, UILabel, UIView, UIButton;

@interface ACCToastWithCancelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (nonatomic) BOOL needCancel;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) long long loadingWidth;
@property (nonatomic) long long loadingLeft;
@property (nonatomic) long long loadingRight;
@property (copy, nonatomic) id /* block */ cancelBlk;

- (void)didClickCancel;
- (void)showLoadingOnView:(id)a0;
- (void)updateCancelTitle:(id)a0;
- (void)showToastOnView:(id)a0;
- (void)showToastOnView:(id)a0 customizeWidthRatio:(double)a1 customizeHeightRatio:(double)a2;
- (id)initWithCancel:(BOOL)a0 isLoading:(BOOL)a1;
- (double)titleEdgeLeft;
- (struct CGSize { double x0; double x1; })sizeOfToast;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)dismissToast;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithCancel:(BOOL)a0;
- (void)updateTitle:(id)a0;

@end
