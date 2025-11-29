@class PHAsset, UIImage, NSString;

@interface APCMediaResourceModel : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *originalImage;
@property (copy, nonatomic) NSString *resourceURL;

+ (id)createMediaResourceModleWithURL:(id)a0 withCoverImage:(id)a1;
+ (id)createMediaResourceModleWithAsset:(id)a0 withCoverImage:(id)a1;
+ (id)createMediaResourceModleWithImage:(id)a0 withCoverImage:(id)a1;

- (void).cxx_destruct;

@end
