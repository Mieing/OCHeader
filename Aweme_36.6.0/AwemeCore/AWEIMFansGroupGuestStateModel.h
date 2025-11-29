@class NSArray, AWEIMCodeGenRemindCreateGroupInfoModel;

@interface AWEIMFansGroupGuestStateModel : IESIMBaseApiModel

@property (retain, nonatomic) NSArray *groupList;
@property (copy, nonatomic) NSArray *recommendedGroupSequence;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) AWEIMCodeGenRemindCreateGroupInfoModel *remindCreateGroupInfo;

+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
