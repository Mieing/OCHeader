@class VEAlgorithmSession, AWECustomStickerLimitConfig, UIImage, NSString, YYImage;

@interface AWECustomPhotoStickerEditConfig : NSObject

@property (nonatomic) BOOL isGIF;
@property (nonatomic) BOOL shouldUsePNGRepresentation;
@property (retain, nonatomic) AWECustomStickerLimitConfig *configs;
@property (retain, nonatomic) YYImage *animatedImage;
@property (retain, nonatomic) UIImage *inputImage;
@property (retain, nonatomic) UIImage *processedImage;
@property (nonatomic) BOOL useProcessedData;
@property (nonatomic) BOOL useCutoutImg;
@property (nonatomic) BOOL useCroppedImg;
@property (nonatomic) BOOL cutoutAlgorithmDownloaded;
@property (nonatomic) BOOL localCutoutEnabled;
@property (nonatomic) long long cutoutType;
@property (retain, nonatomic) VEAlgorithmSession *algSession;
@property (retain, nonatomic) NSString *localStickerPath;

+ (id)getCutoutTypeStrWithType:(long long)a0;

- (id)initWithUTI:(id)a0 limit:(id)a1;
- (void).cxx_destruct;

@end
