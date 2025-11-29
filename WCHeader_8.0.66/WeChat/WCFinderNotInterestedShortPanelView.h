@class UILabel;

@interface WCFinderNotInterestedShortPanelView : MMUIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic, getter=isHighLight) BOOL highLight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViewsAndLayout;
- (void)updateView;
- (id)getTipsLabelText;
- (void).cxx_destruct;

@end
