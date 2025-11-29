@class NSMutableArray, UIStackView;

@interface AWEECOMIMCardComponentMultiLabelView : UIView

@property (readonly, nonatomic) NSMutableArray *labels;
@property (readonly, nonatomic) UIStackView *stackView;

+ (unsigned long long)maxLine;
+ (double)designHeight;
+ (double)designHeightWithData:(id)a0 width:(double)a1;
+ (double)lineHeight;

- (void)setDesLabelCount:(unsigned long long)a0;
- (id)createNewDesLabel;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
