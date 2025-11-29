@class PAGView, UILabel;

@interface MMFinderLiveGenericLongPressEducationView : UIView

@property (nonatomic) unsigned long long viewType;
@property (retain, nonatomic) PAGView *animationView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewType:(unsigned long long)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)show;
- (void)animateToHideWithCompletion:(id /* block */)a0;
- (void)hide;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)getTipsLabelText;
- (void).cxx_destruct;

@end
