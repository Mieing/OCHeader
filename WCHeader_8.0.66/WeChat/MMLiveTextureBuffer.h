@interface MMLiveTextureBuffer : NSObject

@property (nonatomic) char *texBuff;
@property (nonatomic) struct CGSize { double width; double height; } texSize;

- (id)initWithTexBuff:(char *)a0 texSize:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;

@end
