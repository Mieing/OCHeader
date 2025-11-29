@class UIImage;

@interface IESLiveBadgeImageNode : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL isAnimated;

- (void).cxx_destruct;

@end
