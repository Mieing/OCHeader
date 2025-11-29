@class CAGradientLayer;

@interface MMUIMaskContainerView : UIView

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL paramChanged;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (nonatomic) unsigned long long maskPosition;
@property (nonatomic) double maskLength;

- (void)layoutSubviews;
- (void)rebuildMaskLayer;
- (void).cxx_destruct;

@end
