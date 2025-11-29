@interface MMLiveFaceDecodeResult : NSObject

@property (nonatomic) char *texBuff;
@property (nonatomic) struct CGSize { double width; double height; } texSize;

- (BOOL)isValid;

@end
