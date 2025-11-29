@class NSArray, AWEIMFansGroupIntroduceModel, AWEIMCreateFansGroupModel;

@interface AWEIMFansGroupMasterStateModel : IESIMBaseApiModel

@property (retain, nonatomic) NSArray *groupList;
@property (nonatomic) BOOL hasFansGroup;
@property (retain, nonatomic) AWEIMFansGroupIntroduceModel *introduceModel;
@property (retain, nonatomic) AWEIMCreateFansGroupModel *createFansGroupModel;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long showCountLimit;
@property (nonatomic) BOOL hasCreatorFansGroupPermission;
@property (nonatomic) BOOL showFansGroupUpdateTips;

+ (id)groupListJSONTransformer;
+ (id)createFansGroupModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
