@class NSObject, MMUILabel, MMUIImageView;

@interface MJPageViewTitleItem : MMUIView

@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) NSObject *selectedObject;
@property (retain, nonatomic) NSObject *unselectedObject;
@property (nonatomic) long long index;
@property (nonatomic) BOOL selected;

+ (id)itemWithTitle:(id)a0 fontSize:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(id)a1 unselected:(id)a2;
- (void)layoutSubviews;
- (void)setObject:(id)a0;
- (void)changeLabelHidden:(BOOL)a0 imageViewHidden:(BOOL)a1;
- (void).cxx_destruct;

@end
