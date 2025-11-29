@class UILabel, UIButton;

@interface IESLiveMultiCameraListViewPaidCell : IESLiveMultiCameraListViewCell

@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIButton *paidButton;
@property (copy, nonatomic) id /* block */ paidButtonDidClick;

+ (id)cellIdentifier;

- (void)updateCameraInfo:(id)a0 selected:(BOOL)a1 cellType:(long long)a2;
- (void)addPaidUI;
- (void)updatePaidSubviewsFrame;
- (void)paidButtonSelect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
