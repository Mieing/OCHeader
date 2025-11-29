@class UILabel, UIImageView, UIView;

@interface MMFinderLiveConnectedMicBaseExpandView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (nonatomic) BOOL isExpand;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)resetState;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)a0 isExpand:(BOOL)a1;
- (void).cxx_destruct;

@end
