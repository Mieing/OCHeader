@class MMUIView, UIView;

@interface GameCenterMsgListRawBaseCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMUIView *dividerView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL highLightBackground;
@property (retain, nonatomic) UIView *hightLightBgView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCellData:(id)a0;
- (void).cxx_destruct;

@end
