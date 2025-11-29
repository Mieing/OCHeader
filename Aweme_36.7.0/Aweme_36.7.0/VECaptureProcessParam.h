@interface VECaptureProcessParam : NSObject

@property (nonatomic) int type;
@property (nonatomic) int processInterval;
@property (nonatomic) struct CGSize { double width; double height; } processSize;

- (id)init;

@end
