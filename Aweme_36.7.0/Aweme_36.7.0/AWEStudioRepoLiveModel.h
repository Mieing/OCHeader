@class NSString, NSDictionary, NSValue, NSNumber;

@interface AWEStudioRepoLiveModel : NSObject <ACCRepositoryRequestParamsDeprecated, ACCRepositoryClipContextProtocol, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepoLiveStickerConfigProtocol, ACCRepoRegister, ACCRepoLiveData, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *imageTextConfig;
@property (nonatomic) double targetTime;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *liveUserName;
@property (copy, nonatomic) NSString *liveSimpleUserName;
@property (copy, nonatomic) NSString *liveRoomId;
@property (copy, nonatomic) NSString *liveRoomTime;
@property (copy, nonatomic) NSString *liveCoverUrl;
@property (copy, nonatomic) NSString *liveAnchorId;
@property (copy, nonatomic) NSString *liveAnchorDisplayId;
@property (copy, nonatomic) NSString *liveFragmentId;
@property (retain, nonatomic) NSNumber *liveRecordStartTime;
@property (retain, nonatomic) NSNumber *liveRecordEndTime;
@property (copy, nonatomic) NSDictionary *liveEcommerceTrackDict;
@property (retain, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSValue *liveWatermarkFrameValue;
@property (nonatomic) double liveVideoDuration;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long pushToType;
@property (readonly, nonatomic) BOOL isAdminPushToAnchor;
@property (readonly, copy, nonatomic) NSString *pushToTypeText;
@property (retain, nonatomic) NSString *imageTextConfig;
@property (nonatomic) double targetTime;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (id)liveImageTextStickerConfig;
- (double)configTargetTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trackInfo;

@end
