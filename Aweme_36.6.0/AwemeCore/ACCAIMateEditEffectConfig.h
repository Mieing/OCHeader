@class NSString, NSArray, NSValue, NSError, NSNumber, UIImage;

@interface ACCAIMateEditEffectConfig : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bizUUID;
@property (copy, nonatomic) NSString *projectUUID;
@property (copy, nonatomic) NSString *baseBizUUID;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSValue *imageSizeAtFilePath;
@property (copy, nonatomic) NSArray *recommendWordModel;
@property (copy, nonatomic) NSString *userText;
@property (copy, nonatomic) NSString *noNetRecommendText;
@property (copy, nonatomic) NSArray *textModel;
@property (copy, nonatomic) NSString *stickerStashJsonString;
@property (retain, nonatomic) NSNumber *stickerStashTimestamp;
@property (copy, nonatomic) NSString *stickerTTSStashJsonString;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long retryPolicyType;
@property (copy, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) BOOL isOneClickFascinate;
@property (nonatomic) unsigned long long livePhotoMode;
@property (nonatomic) BOOL didRender;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double progress;
@property (nonatomic) double estimatedSeconds;
@property (copy, nonatomic) NSString *startColor;
@property (copy, nonatomic) NSString *endColor;
@property (copy, nonatomic) NSString *effectFilePath;
@property (retain, nonatomic) NSValue *cropInfo;
@property (copy, nonatomic) NSString *lastImageFilePath;
@property (copy, nonatomic) NSString *aiWritingThumbnailFileName;
@property (copy, nonatomic) NSString *aiWritingThumbnailFilePath;
@property (retain, nonatomic) UIImage *aiWritingStickerSnapImage;
@property (copy, nonatomic) NSString *aiWritingStickerSnapFileName;
@property (copy, nonatomic) NSString *aiWritingStickerSnapFilePath;
@property (nonatomic) BOOL isExceed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textModelJSONTransformer;
+ (id)recommendWordModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hintText;
- (BOOL)needAnimation;
- (id)stickerStash;
- (id)stickerTTSStash;
- (id)hintTextType;
- (void)updateRecommendWordModel;
- (id)initWithBizUUID:(id)a0 projectUUID:(id)a1;
- (id)initWithBizUUID:(id)a0 projectUUID:(id)a1 filePath:(id)a2;
- (void).cxx_destruct;
- (BOOL)canRetry;
- (id)thumbnail;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
