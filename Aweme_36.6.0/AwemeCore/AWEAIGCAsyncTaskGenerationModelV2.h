@class NSString, NSArray, NSDictionary, AWEAIGCAsyncTaskGenerationDetail, AWEURLModel;

@interface AWEAIGCAsyncTaskGenerationModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *aiType;
@property (copy, nonatomic) NSArray *slotList;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) AWEURLModel *effectCover;
@property (copy, nonatomic) NSString *ugcStickerId;
@property (copy, nonatomic) NSString *ugcStickerName;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long slotNumber;
@property (nonatomic) BOOL isMultiPortrait;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *resourceMap;
@property (nonatomic) long long roleType;
@property (nonatomic) long long multiPortraitReqSource;
@property (nonatomic) long long waitingMinutes;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (retain, nonatomic) AWEAIGCAsyncTaskGenerationDetail *statusDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slotListJSONTransformer;
+ (id)statusDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
