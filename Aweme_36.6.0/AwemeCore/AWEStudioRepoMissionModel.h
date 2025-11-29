@class AWETaskModel, NSString, NSDictionary, NSData;

@interface AWEStudioRepoMissionModel : AWEBaseApiModel <ACCRepoMissionModelProtocol, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryClipContextProtocol, AWERepositoryDraftProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWETaskModel *mission;
@property (copy, nonatomic) NSString *missionFrom;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionName;
@property (nonatomic) BOOL isAssignmentMission;
@property (nonatomic) BOOL excludeCustomStickerEntrance;
@property (copy, nonatomic) NSDictionary *selectedMissionInfo;
@property (retain, nonatomic) NSData *taskJson;
@property (retain, nonatomic) NSData *challengeJson;
@property (copy, nonatomic) NSString *starAtlasExtra;

+ (id)missionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)acc_mission;
- (id)acc_missionName;
- (id)acc_missionID;
- (id)acc_missionFrom;
- (BOOL)acc_isAssignmentMission;
- (BOOL)acc_excludeCustomStickerEntrance;
- (BOOL)acc_isRecordLiveMission;
- (id)acc_selectedMissionInfo;
- (BOOL)shouldShowMissionItem;
- (void)updateMissionID:(id)a0 missionType:(id)a1 missionName:(id)a2 isAssignmentMission:(BOOL)a3 selectedMissionInfo:(id)a4;
- (id)acc_publishTrackEventParams:(id)a0;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
