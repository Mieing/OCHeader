@class UIColor, NSMutableDictionary;

@interface WCFinderLimitCheckPanelView : UIView

@property (retain, nonatomic) NSMutableDictionary *arrangeViewsDic;
@property (retain, nonatomic) UIColor *lineColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLineColor:(id)a0;
- (void)removeAllArrangeSubviews;
- (void)addArrangedSubview:(id)a0 priority:(long long)a1;
- (void)layoutAddedSubviews;
- (void).cxx_destruct;

@end
