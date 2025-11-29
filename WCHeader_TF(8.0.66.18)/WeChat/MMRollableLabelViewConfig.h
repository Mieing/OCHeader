@class UIFont;

@interface MMRollableLabelViewConfig : NSObject

@property (nonatomic) double maxLabelWidth;
@property (nonatomic) double rollSpeedPerSecond;
@property (nonatomic) double reverseInterval;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) double minHeight;
@property (nonatomic) unsigned long long rollingMode;
@property (nonatomic) double scrollSpacing;
@property (nonatomic) BOOL autoAnimation;
@property (nonatomic) struct CGSize { double width; double height; } pagSize;
@property (nonatomic) double iconTextPading;

- (void).cxx_destruct;

@end
