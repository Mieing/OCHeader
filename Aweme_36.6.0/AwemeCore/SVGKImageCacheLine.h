@class SVGKImage;

@interface SVGKImageCacheLine : NSObject

@property (nonatomic) int numberOfInstances;
@property (retain, nonatomic) SVGKImage *mainInstance;

- (void).cxx_destruct;

@end
