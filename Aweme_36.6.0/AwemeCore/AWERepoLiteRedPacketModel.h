@class AWELiteRedPacketGuideInfo, NSString, AWELiteGameStickerInfo, AWELiteRedPacketStickerInfo;

@interface AWERepoLiteRedPacketModel : NSObject <NSCopying, ACCRepositoryRequestParamsDeprecated, AWERepoLiteRedPacketData, AWERepositoryDraftProtocol, ACCRepositoryTrackContextDeprecated, ACCRepositoryClipContextProtocol, ACCRepositorySelectPhotoContextProtocol, ACCRepoRegister>

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerCategoryKey;
@property (nonatomic) long long propType;
@property (retain, nonatomic) AWELiteRedPacketGuideInfo *guideInfo;
@property (retain, nonatomic) AWELiteRedPacketStickerInfo *fetchedStickerInfo;
@property (retain, nonatomic) AWELiteGameStickerInfo *gameStickerInfo;
@property (copy, nonatomic) NSString *publishReason;
@property (nonatomic) BOOL isRedpackCreateVideoTask;
@property (nonatomic) BOOL isShowRedpackSticker;
@property (nonatomic) BOOL winState;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) long long bizType;
@property (nonatomic) long long minAwardNum;
@property (nonatomic) long long actualAwardNum;
@property (nonatomic) long long limitAwardNum;
@property (nonatomic) double coefficient;
@property (copy, nonatomic) NSString *challengeTaskKey;
@property (retain, nonatomic) NSString *categoryName;
@property (nonatomic) BOOL recordButtonShouldStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)acc_publishTrackEventParams:(id)a0;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (void)storyPhotoDidClickedNextWithImage:(id)a0 publishViewModel:(id)a1 originalPublishModel:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
