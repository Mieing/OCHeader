@class UIImageView, UIView;

@interface WCMomentsSpringTextContainerView : UIView

@property (retain, nonatomic) UIImageView *tigerHeadImageView;
@property (retain, nonatomic) UIImageView *tigerBodyImageView;
@property (retain, nonatomic) UIImageView *tigerTailImageView;
@property (retain, nonatomic) UIImageView *bottomHeadFireworksImageView;
@property (retain, nonatomic) UIImageView *topTailFireworksImageView;
@property (retain, nonatomic) UIImageView *bottomTailFireworksImageView;
@property (readonly, nonatomic) double minWidth;
@property (nonatomic) double minContentWidth;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) double maxContentWidth;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double contentMarginLeft;
@property (nonatomic) double contentMarginRight;
@property (nonatomic) double contentMarginTotalX;
@property (nonatomic) struct CGPoint { double x; double y; } adjustedContentOffset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustSizeWithContentView;
- (void)adjustSizeWithContentWidth:(double)a0;
- (void)layoutSubviews;
- (void)layoutSizeForTigerImageView:(id)a0;
- (double)tigerImageView:(id)a0 widthFromHeight:(double)a1;
- (void).cxx_destruct;

@end
