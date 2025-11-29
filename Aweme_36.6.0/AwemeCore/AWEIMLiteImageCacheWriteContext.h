@class UIImage, NSString;

@interface AWEIMLiteImageCacheWriteContext : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL forceCache;

- (void).cxx_destruct;

@end
