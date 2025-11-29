@class UIImageView, UILabel, UIView;

@interface ACCBrushColorEntranceView : UIView

@property (retain, nonatomic) UIImageView *backColorView;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ actionblock;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL enable;

- (void)configViewWithTapAction:(id /* block */)a0;
- (void)configCellWithColorValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTapGesture;

@end
