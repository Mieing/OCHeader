@class UIImage;

@interface BDAnimateImageFrame : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double delay;
@property (nonatomic) double nextFrameTime;

- (void).cxx_destruct;

@end
