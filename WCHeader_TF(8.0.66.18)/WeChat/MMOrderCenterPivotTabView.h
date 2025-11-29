@class UILabel, NSString;

@interface MMOrderCenterPivotTabView : MMUIView

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long numbering;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } indicatorFrame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 numbering:(long long)a2;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateText;
- (void).cxx_destruct;

@end
