@class HTSLiveRoom, NSString, AWELiveRoomModel, AWEURLModel;

@interface AWELiveFollowFeedCellModel : AWEBaseApiModel

@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) NSString *secondStageFeedTag;
@property (nonatomic) long long secondStageFeedTagID;
@property (retain, nonatomic) AWEURLModel *secondStageFeedIcon;
@property (retain, nonatomic) NSString *poiDistance;
@property (retain, nonatomic) NSString *liveRoomRawData;
@property (retain, nonatomic) AWELiveRoomModel *rawDataRoomModel;
@property (retain, nonatomic) HTSLiveRoom *rawHTSLiveRoomModel;
@property (nonatomic) long long vsDistributeType;
@property (copy, nonatomic) NSString *insertTaskId;

+ (id)rawModelFromJsonString:(id)a0;
+ (id)rawDictFromJsonString:(id)a0;
+ (id)transferLiveRoomModelFromDict:(id)a0;
+ (id)rawDataRoomModelJSONTransformer;
+ (id)rawHTSLiveRoomModelJSONTransformer;
+ (id)roomModelJSONTransformer;
+ (id)secondStageFeedIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
