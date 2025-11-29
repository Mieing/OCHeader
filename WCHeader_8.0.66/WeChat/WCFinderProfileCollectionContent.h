@class UIImageView, UILabel, UIView;

@interface WCFinderProfileCollectionContent : NSObject

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) UIView *hostView;
@property (nonatomic) BOOL hiddenBottomLine;
@property (nonatomic) double horizontalPadding;

+ (double)coverSize;
+ (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hostView:(id)a1;
- (void)update:(id)a0 summary:(id)a1 cover:(id)a2;
- (void).cxx_destruct;

@end
