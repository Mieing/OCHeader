@class UIColor;

@interface QPolylineSegmentColor : NSObject

@property (nonatomic) int startIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) unsigned long long indexOfColorPair;

- (void).cxx_destruct;

@end
