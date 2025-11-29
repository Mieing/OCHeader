@class UILabel, CJPayStandardTagContainerView, UIView;

@interface CJPayUnifyPayMethodCollectionItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStandardTagContainerView *voucherTagContainer;
@property (nonatomic) BOOL needShowSelectStatus;

- (id)cj_performanceMonitorName;
- (void)updateContentWithViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
