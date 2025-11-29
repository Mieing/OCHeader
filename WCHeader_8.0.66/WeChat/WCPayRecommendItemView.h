@class NSArray, NSMutableArray;
@protocol WCPayRecommendItemViewDelegate;

@interface WCPayRecommendItemView : UIView

@property (retain) NSArray *numbers;
@property (retain) NSMutableArray *itemViews;
@property (retain) NSMutableArray *seperatorViews;
@property (weak) id<WCPayRecommendItemViewDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateNumbers:(id)a0;
- (void)updateButtons;
- (void)addButton:(id)a0;
- (void)addLine;
- (void)onClickButton:(id)a0;
- (void).cxx_destruct;

@end
