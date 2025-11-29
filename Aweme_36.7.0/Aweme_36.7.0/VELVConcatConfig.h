@interface VELVConcatConfig : NSObject

@property (nonatomic) double imageDuration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)init;

@end
