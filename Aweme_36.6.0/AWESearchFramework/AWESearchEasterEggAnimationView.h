@class NSArray, AWESearchEasterEggModel;

@interface AWESearchEasterEggAnimationView : UIView

@property (copy, nonatomic) AWESearchEasterEggModel *model;
@property (retain, nonatomic) NSArray *animationGroups;
@property (retain, nonatomic) NSArray *animationViews;

- (void)configWithModel:(id)a0;
- (void)__prepareElements;
- (void).cxx_destruct;
- (void)play;
- (void)remove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
