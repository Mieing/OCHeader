@class UIColor;

@interface QLocationRedlinePayload : NSObject

@property (nonatomic) double width;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct { double x; double y; } destination;

- (void).cxx_destruct;

@end
