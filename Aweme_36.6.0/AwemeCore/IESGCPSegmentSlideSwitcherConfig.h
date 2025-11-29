@class UIColor, UIFont;

@interface IESGCPSegmentSlideSwitcherConfig : NSObject

@property (nonatomic) BOOL needGradient;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double indicatorBottomMargin;
@property (nonatomic) BOOL indicatorWidthAutoFill;
@property (retain, nonatomic) UIFont *normalTitleFont;
@property (retain, nonatomic) UIFont *selectedTitleFont;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;

- (double)getSpaceBetweenWidthWithMaxWidth:(double)a0 count:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
