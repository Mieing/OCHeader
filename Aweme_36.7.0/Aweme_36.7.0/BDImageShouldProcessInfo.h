@interface BDImageShouldProcessInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) BOOL shouldDecodeImage;

- (BOOL)isEmptyDownSampleInfo;
- (id)init;

@end
