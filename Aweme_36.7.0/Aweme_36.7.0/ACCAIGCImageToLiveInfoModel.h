@class NSString;

@interface ACCAIGCImageToLiveInfoModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *fromTaskID;
@property (copy, nonatomic) NSString *fromEffectID;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *imageDraftRelativePath;
@property (copy, nonatomic) NSString *videoDraftRelativePath;
@property (nonatomic) double lastProgress;
@property (nonatomic) double lastEstimatedTime;
@property (nonatomic) BOOL hasSetNeedNotice;
@property (nonatomic) BOOL hasShowReplaceToLiveAlert;
@property (nonatomic) BOOL hasAIEraserBeforeTask;
@property (nonatomic) BOOL hasAIExpandBeforeTask;
@property (copy, nonatomic) NSString *lastApplyingAITemplet;
@property (copy, nonatomic) NSString *fromMusicID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
