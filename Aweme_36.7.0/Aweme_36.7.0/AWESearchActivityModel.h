@class AWEGeneralActivityModel, NSArray;

@interface AWESearchActivityModel : AWEBaseApiModel <IGListDiffable>

@property (retain, nonatomic) AWEGeneralActivityModel *activityModel;
@property (retain, nonatomic) NSArray *liveRooms;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic) BOOL isLandscaped;

+ (id)activityModelJSONTransformer;
+ (id)liveRoomsJSONTransformer;
+ (id)liveRoomModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)liveRoomModel;
- (void).cxx_destruct;

@end
