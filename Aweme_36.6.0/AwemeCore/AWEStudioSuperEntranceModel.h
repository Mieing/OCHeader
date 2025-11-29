@class NSArray, NSString;

@interface AWEStudioSuperEntranceModel : AWEBaseApiModel <NSCoding>

@property (copy, nonatomic) NSArray *activityTimes;
@property (copy, nonatomic) NSString *exampleVideoURL;
@property (copy, nonatomic) NSString *exampleVideoMD5;
@property (copy, nonatomic) NSString *loopVideoURL;
@property (copy, nonatomic) NSString *loopVideoMD5;
@property (copy, nonatomic) NSString *effectModelID;
@property (copy, nonatomic) NSArray *effectModelIDArray;
@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *coverImageMD5;
@property (copy, nonatomic) NSString *plusIconURL;
@property (copy, nonatomic) NSString *plusIconMD5;
@property (copy, nonatomic) NSString *stickerButtonBubbleString;
@property (copy, nonatomic) NSString *plusButtonBubbleString;

+ (id)activityTimesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoFilePath;
- (id)plusIconImage;
- (BOOL)isInActivityTime;
- (void)cleanResources;
- (BOOL)isDownloadingEffectModel;
- (BOOL)isDownloadingPlusIcon;
- (void)setIsDownloadingEffectModel:(BOOL)a0;
- (void)setIsDownloadingPlusIcon:(BOOL)a0;
- (void)downloadResources;
- (BOOL)isDownloadingVideo;
- (BOOL)isDownloadingLoopVideo;
- (BOOL)isDownloadingCoverImage;
- (id)effectModelResourcePath;
- (void)createResourcesDirectoryIfNeeded;
- (void)setIsDownloadingVideo:(BOOL)a0;
- (id)loopVideoFilePath;
- (void)setIsDownloadingLoopVideo:(BOOL)a0;
- (void)setIsDownloadingCoverImage:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)coverImage;

@end
