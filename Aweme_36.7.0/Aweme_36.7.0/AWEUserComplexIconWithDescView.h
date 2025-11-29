@class NSArray, NSMutableArray, UIStackView;

@interface AWEUserComplexIconWithDescView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *iconViewArray;
@property (retain, nonatomic) NSArray *modelArray;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;

- (void)setupSubview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
