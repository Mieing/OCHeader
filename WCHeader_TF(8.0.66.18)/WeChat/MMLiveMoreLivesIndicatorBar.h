@class UIImageView, MMUILabel, MMWebImageView;

@interface MMLiveMoreLivesIndicatorBar : MMLiveBaseComponentView

@property (retain, nonatomic) MMUILabel *moreLiveLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) MMWebImageView *moreLiveIconView;
@property (copy, nonatomic) id /* block */ moreLiveClickedCallBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateMoreLiveBarTitle:(id)a0 iconUrl:(id)a1;
- (void)sizeToFits;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onMoreLiveClicked:(id)a0;
- (void).cxx_destruct;

@end
