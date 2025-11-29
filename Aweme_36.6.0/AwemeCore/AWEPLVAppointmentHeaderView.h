@class DUXBasicButton, NSString, UILabel, UIView;

@interface AWEPLVAppointmentHeaderView : UICollectionReusableView <AWEPadCollectionReusableViewLayoutProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXBasicButton *refreshButton;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (copy, nonatomic) id /* block */ onBookCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })a0;

- (void)configHeaderViewInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)showLoadingAnimation:(BOOL)a0;
- (void)updateViewForBreakPoint;
- (void)setRefreshLabelText:(id)a0;
- (void)updateButtonShow:(BOOL)a0;
- (void)onBookBtnClicked:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
