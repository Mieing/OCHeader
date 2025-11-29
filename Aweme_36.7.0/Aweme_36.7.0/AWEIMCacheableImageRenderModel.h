@class UIImage, NSString, NSURL;

@interface AWEIMCacheableImageRenderModel : NSObject

@property (nonatomic) unsigned long long renderType;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) UIImage *placeholder;
@property (nonatomic) BOOL disableDownsample;
@property (copy, nonatomic) NSString *cacheName;

- (void).cxx_destruct;

@end
