@class NSString, NSArray, NSMutableArray, MMUILabel;

@interface KidsWatchInfoCardView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *cellViews;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
