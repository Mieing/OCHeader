@class UILabel, NSMutableArray, UIStackView;

@interface AWEMissionPrizeView : UIView

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double preferredMaxLayoutWidth;

- (id)prizeIconColorForLevel:(unsigned long long)a0;
- (void)updateWithPrizeDescriptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
