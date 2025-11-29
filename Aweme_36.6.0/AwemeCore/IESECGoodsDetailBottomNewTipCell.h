@class UILabel, IESECTextWithIconElement;

@interface IESECGoodsDetailBottomNewTipCell : UIView

@property (retain, nonatomic) IESECTextWithIconElement *tipModel;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)openAddrBook;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tipModel:(id)a1;
- (void).cxx_destruct;
- (void)updateContent;
- (void)setupUI;

@end
