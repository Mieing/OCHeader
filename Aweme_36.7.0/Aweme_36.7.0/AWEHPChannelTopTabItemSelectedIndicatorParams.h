@class UIImage;

@interface AWEHPChannelTopTabItemSelectedIndicatorParams : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *lightModeImage;
@property (retain, nonatomic) UIImage *darkModeImage;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double centerXOffset;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
