@class NSString, UIImageView, AWEPLVRefreshButton, UILabel, UIView;

@interface AWEPadPolymericChannelRefreshHeaderView : UICollectionReusableView <AWEPLVRefreshButtonDelegate, AWEPadCollectionReusableViewLayoutProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIconView;
@property (copy, nonatomic) id /* block */ onReshCallback;
@property (retain, nonatomic) AWEPLVRefreshButton *refreshButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })a0;

- (void)onClickButton;
- (void)configHeaderViewInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)showLoadingAnimation:(BOOL)a0;
- (void)updateTitleIcon:(id)a0;
- (void)updateViewForBreakPoint;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTitleFontSize:(long long)a0;

@end
