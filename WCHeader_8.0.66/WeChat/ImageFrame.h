@class UIImage;

@interface ImageFrame : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double duration;

+ (id)frameWithImage:(id)a0 duration:(double)a1;

- (void).cxx_destruct;

@end
