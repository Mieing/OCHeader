@class MMListenCategoryItem, TingCategoryCoverView, UIView, MMUILabel;

@interface TingSharedListView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) TingCategoryCoverView *coverView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (nonatomic) double textMarginTop;
@property (nonatomic) unsigned long long type;

+ (double)cardWidthForChat;
+ (double)cardWidthForMoment;

- (double)cardWidth;
- (int)fontModule;
- (id)titleFont;
- (id)subtitleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateDisplayWith:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
