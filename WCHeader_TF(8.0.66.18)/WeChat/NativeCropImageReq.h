@class NSString, CropRect;

@interface NativeCropImageReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) CropRect *cropRect;

+ (void)initialize;

@end
