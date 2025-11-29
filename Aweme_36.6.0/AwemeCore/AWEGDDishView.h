@class UILabel, NSString, UIView;

@interface AWEGDDishView : UIView <AWEGDImagePointProtocol>

@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) UILabel *tagNameLabel;
@property (retain, nonatomic) UIView *pointContainerView;
@property (retain, nonatomic) UIView *pointInnerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillShow;
- (struct CGPoint { double x0; double x1; })calculateContainerPosition;
- (struct CGSize { double x0; double x1; })calculateContainerSize;
- (void)updateDishData:(id)a0;
- (void)startAnimation;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateModel:(id)a0;

@end
