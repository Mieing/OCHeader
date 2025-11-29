@class NSData;

@interface VEStickerImage : NSObject

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;

- (id)initWithData:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
