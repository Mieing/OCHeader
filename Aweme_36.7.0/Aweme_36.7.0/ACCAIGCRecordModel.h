@class ACCAIGCTaskRetryDetailModel, NSString, NSDictionary, ACCAIGCTaskCodeInfoModel, ACCAIGCTaskRetryExtraInfoModel, AWEURLModel;

@interface ACCAIGCRecordModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *fromTaskID;
@property (nonatomic) long long userId;
@property (retain, nonatomic) NSDictionary *resourceMap;
@property (retain, nonatomic) AWEURLModel *effectCover;
@property (retain, nonatomic) NSString *stickerId;
@property (retain, nonatomic) NSString *stickerName;
@property (retain, nonatomic) NSString *ugcStickerId;
@property (retain, nonatomic) NSString *ugcStickerName;
@property (retain, nonatomic) NSString *effectExtra;
@property (nonatomic) long long taskStatus;
@property (nonatomic) long long recordStatus;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) NSString *AIType;
@property (retain, nonatomic) NSString *taskType;
@property (nonatomic) long long slotNumber;
@property (nonatomic) BOOL isMultiPortrait;
@property (nonatomic) long long roleType;
@property (nonatomic) long long MultiPortraitReqSource;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *styleId;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (retain, nonatomic) ACCAIGCTaskCodeInfoModel *codeInfo;
@property (retain, nonatomic) ACCAIGCTaskRetryExtraInfoModel *extraRetryInfo;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL hasClicked;
@property (copy, nonatomic) NSString *taskGroupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retryDetailJSONTransformer;
+ (id)codeInfoJSONTransformer;
+ (id)extraRetryInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
