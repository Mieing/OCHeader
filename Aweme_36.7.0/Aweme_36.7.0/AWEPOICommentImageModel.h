@class NSString, NSArray, UIImage, AVURLAsset;

@interface AWEPOICommentImageModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *realPath;
@property (copy, nonatomic) NSString *realFileName;
@property (retain, nonatomic) UIImage *realImage;
@property (retain, nonatomic) AVURLAsset *realVideo;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *comURI;
@property (readonly, copy, nonatomic) NSString *rawURI;
@property (readonly, copy, nonatomic) NSArray *stickerURIs;
@property (retain, nonatomic) UIImage *resultImage;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *base64ThumbnailImage;
@property (retain, nonatomic) UIImage *rawCompressedImage;
@property (copy, nonatomic) NSArray *stickerImages;
@property (copy, nonatomic) NSArray *stickerTexts;
@property (readonly, copy, nonatomic) NSArray *verifiedImages;
@property (nonatomic) long long picTextCount;
@property (nonatomic) long long picStickerCount;
@property (nonatomic) BOOL isPicFiltered;
@property (nonatomic) BOOL isPicBeautified;
@property (nonatomic) BOOL isPicEnhanced;
@property (nonatomic) BOOL isCaptured;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *vDuration;
@property (copy, nonatomic) NSString *vWidth;
@property (copy, nonatomic) NSString *vHeight;
@property (copy, nonatomic) NSString *videoCoverURL;
@property (nonatomic) double videoDuration;

- (BOOL)isNeedRemoveBase64;
- (id)adjustImageSizeWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setCommentImagePath:(id)a0;
- (void)updateVerifiedURI:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImagePath:(id)a0;

@end
