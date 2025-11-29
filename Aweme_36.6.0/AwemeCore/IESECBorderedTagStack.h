@class NSArray, NSMutableArray;

@interface IESECBorderedTagStack : UIView {
    NSMutableArray *_tags;
}

@property (copy, nonatomic) NSArray *tagConfigurations;
@property (nonatomic) double spacing;

- (void)updateTagViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
