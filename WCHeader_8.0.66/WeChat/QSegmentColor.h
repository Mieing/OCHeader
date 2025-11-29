@class UIColor;

@interface QSegmentColor : NSObject

@property (nonatomic) int startIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *borderColor;

- (void).cxx_destruct;

@end
