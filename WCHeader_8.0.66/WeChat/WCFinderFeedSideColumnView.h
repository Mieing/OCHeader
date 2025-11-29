@class NSMutableArray, NSArray, CAShapeLayer, UILabel, UIView, UIButton;
@protocol WCFinderFeedSideColumnViewDelegate;

@interface WCFinderFeedSideColumnView : UIView

@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSMutableArray *feedViews;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) id<WCFinderFeedSideColumnViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentVMList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (double)maxHeight;
- (void)_onClickCloseButton;
- (void)layoutSubviews;
- (void)_onClickItemView:(id)a0;
- (void)animateUnDisplayThenRemove;
- (void)animateDisplay;
- (void).cxx_destruct;

@end
