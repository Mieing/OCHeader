@class HTSCurrentPageLayer, UIColor, HTSTrackLayer;

@interface HTSPageControl : UIControl

@property (readonly, nonatomic) HTSTrackLayer *trackLayer;
@property (readonly, nonatomic) HTSCurrentPageLayer *currentPageLayer;
@property (nonatomic) unsigned long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) double radius;
@property (nonatomic) double spaceWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) double rectWidth;
@property (nonatomic) double rectHeight;
@property (nonatomic) unsigned long long pageControlType;

- (void)pr_updateFrame;
- (void)pr_updateCurrent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
