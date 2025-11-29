@class NSMutableArray, UIStackView;

@interface AWEECOMIMMemberRightView : UIView

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) UIStackView *stackView;

+ (double)heightWithMemberInfoModel:(id)a0;
+ (double)contentTopPadding;

- (void)updateWithMemberInfoModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
