@class NSString, AWEAwemeModel, UIImage, AWEAIGCUGCFusionVideoEditExportResult;

@interface ACCAIGCUGCFrameReferenceVideoModel : ACCAIGCUGCFrameReferenceModel

@property (copy, nonatomic) NSString *frameReferenceVideoCoverFilePath;
@property (copy, nonatomic) NSString *frameReferenceVideoCoverMemoryRelativeFilePath;
@property (copy, nonatomic) NSString *referenceVideoMaterialId;
@property (copy, nonatomic) NSString *referenceVideoFrameFilePath;
@property (copy, nonatomic) NSString *referenceVideoFrameMemoryRelativeFilePath;
@property (copy, nonatomic) NSString *referenceVideoFrameUri;
@property (copy, nonatomic) NSString *referenceVideoFrameVlmInfo;
@property (nonatomic) long long referenceVideoFrameFaceCount;
@property (nonatomic) long long referenceVideoFramePetCount;
@property (nonatomic) long long referenceVideoFrameImageWidth;
@property (nonatomic) long long referenceVideoFrameImageHeight;
@property (retain, nonatomic) AWEAIGCUGCFusionVideoEditExportResult *localReferenceVideoInfo;
@property (copy, nonatomic) NSString *referenceVideoType;
@property (copy, nonatomic) NSString *referenceVideoHintText;
@property (retain, nonatomic) AWEAwemeModel *referenceAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *referenceBackupAwemeModel;
@property (retain, nonatomic) UIImage *coverImage;

+ (id)buildModelFromReferenceVideoDict:(id)a0 backupAweme:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
