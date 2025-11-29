@class MMDynamicColor;

@interface TrueDashLineBoarderView : UIView

@property (nonatomic) double lineLength;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) MMDynamicColor *color;

- (void)layoutSubviews;
- (void)drawDashLineBoarder;
- (void).cxx_destruct;

@end
