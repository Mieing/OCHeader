@interface MagicBrushTouchInfo : NSObject

@property (nonatomic) unsigned long long touchId;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)description;

@end
