@class DUXBaseLabel, UIView;

@interface AWEFormatAISearchCardHeaderView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseLabel *titleLab;
@property (retain, nonatomic) DUXBaseLabel *abstractLab;

+ (double)heightOfAbstract:(id)a0 width:(double)a1;
+ (double)heightWithModel:(id)a0 width:(double)a1;

- (void)p_setupLayout;
- (void)updateWithDisplayModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
