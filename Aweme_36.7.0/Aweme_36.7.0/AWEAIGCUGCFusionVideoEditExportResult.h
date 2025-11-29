@class NSString, AVURLAsset;

@interface AWEAIGCUGCFusionVideoEditExportResult : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *frameReferenceIdentifier;
@property (copy, nonatomic) NSString *phLocalIdentifier;
@property (copy, nonatomic) NSString *avAssetPath;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) double serializedStartTime;
@property (readonly, nonatomic) double serializedEndTime;
@property (readonly, nonatomic) double serializedDuration;
@property (copy, nonatomic) NSString *coverImageFilePath;
@property (copy, nonatomic) NSString *videoFrameFilePath;
@property (nonatomic) struct CGSize { double width; double height; } videoFrameSize;
@property (nonatomic) long long videoFrameFaceCount;
@property (nonatomic) long long videoFramePetCount;
@property (nonatomic) BOOL hasAudioTrack;
@property (nonatomic) BOOL hasSinglePerson;
@property (nonatomic) double referenceVideoClipWidth;
@property (nonatomic) double referenceVideoClipHeight;
@property (copy, nonatomic) NSString *referenceType;
@property (copy, nonatomic) NSString *referenceHintText;
@property (retain, nonatomic) AVURLAsset *urlAsset;

+ (id)JSONKeyPathsByPropertyKey;

- (void)convertSerializedDoublesToCMTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
