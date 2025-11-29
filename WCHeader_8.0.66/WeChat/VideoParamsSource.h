@class NSURL, MMAsset;

@interface VideoParamsSource : NSObject <NSCoding>

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) MMAsset *videoMMAsset;

+ (id)videoParamsSourceFromURL:(id)a0;
+ (id)videoParamsSourceFromMMAsset:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)genVideoParamsInfo;
- (id)genVideoParamsInfoFromURL:(id)a0;
- (id)genVideoParamsInfoFromMMAsset:(id)a0;
- (id)genVideoParamsInfoFromAVAsset:(id)a0;
- (void).cxx_destruct;

@end
