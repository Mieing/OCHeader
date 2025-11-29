@interface AWEGraphicsLayerDescriptor : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;

- (id)createLayer;

@end
