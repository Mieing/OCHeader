@class AWEStudioCaptionInfoModel, NSString, NSArray, AWEEffectCaptionPublishInfo, IESEffectModel;

@interface AWERepoCaptionFollowShotModel : NSObject <ACCRepoModelDraftProtocol, ACCRepoRegister, NSCopying, ACCRepoEffectCaptionData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) double bgmTime;
@property (copy, nonatomic) NSString *prepareEffectId;
@property (nonatomic) BOOL createdByServer;
@property (nonatomic) BOOL addedForRecordScene;
@property (copy, nonatomic) NSArray *recordUsedEffectIds;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) double videoTotalDuration;
@property (nonatomic) long long musicRepeatCount;
@property (copy, nonatomic) NSString *editInsertPropId;
@property (copy, nonatomic) NSArray *editCustomInsertPropIds;
@property (copy, nonatomic) AWEStudioCaptionInfoModel *captionInfo;
@property (readonly, copy, nonatomic) NSString *templateEffectId;
@property (retain, nonatomic) IESEffectModel *templateEffectModel;
@property (readonly, copy, nonatomic) NSString *fontEffectId;
@property (retain, nonatomic) IESEffectModel *fontEffectModel;
@property (copy, nonatomic) NSArray *effectCaptions;
@property (retain, nonatomic) AWEEffectCaptionPublishInfo *originalCaptionInfo;
@property (retain, nonatomic) AWEEffectCaptionPublishInfo *exportCaptionInfo;
@property (retain, nonatomic) IESEffectModel *parentEffectModel;
@property (copy, nonatomic) NSString *recorderEffectId;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct CGSize { double width; double height; } previewOutputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)syncDataFromModel:(id)a0;
- (id)captionWordsForCheck;
- (id)extraWordsForCheck;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
