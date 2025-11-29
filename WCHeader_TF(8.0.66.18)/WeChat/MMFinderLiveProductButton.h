@class FinderWindowProductInfo_ProductButtonInfo, UIFont, MMWebImageView;

@interface MMFinderLiveProductButton : MMUIButton

@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *info;
@property (nonatomic) struct CGSize { double width; double height; } defaultIconSize;
@property (retain, nonatomic) UIFont *defaultFont;
@property (nonatomic) double cardWidth;
@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultSpacing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
