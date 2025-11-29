@class ECProductCardViewModel;

@interface WCFPStoreProductElement_Base : UIView

@property (retain, nonatomic) ECProductCardViewModel *cardVM;

+ (long long)viewHeightByCardVM:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)reloadData;
- (void).cxx_destruct;

@end
