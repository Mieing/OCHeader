@class UIImageView;

@interface WCTiledImageInfo : NSObject

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (nonatomic) int row;
@property (nonatomic) int col;

- (void).cxx_destruct;

@end
