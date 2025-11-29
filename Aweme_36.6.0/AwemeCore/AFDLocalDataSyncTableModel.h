@class AFDLocalUserModel, AFDLocalColorRingModel, AFDLocalFollowModel, AFDLocalMateModel, AFDLocalRecommendReasonModel, AFDLocalPrivacyCommonModel, NSString, AFDLocalCloseFriendModel, AFDLocalIMBizInfoModel, AFDLocalStoryStatusModel, AFDLocalFriendModel;

@interface AFDLocalDataSyncTableModel : AWEBaseApiModel

@property (nonatomic) long long operationType;
@property (nonatomic) long long modifyTime;
@property (retain, nonatomic) AFDLocalUserModel *userModel;
@property (retain, nonatomic) AFDLocalFollowModel *followModel;
@property (retain, nonatomic) AFDLocalFriendModel *friendModel;
@property (retain, nonatomic) AFDLocalCloseFriendModel *closeFriendsModel;
@property (retain, nonatomic) AFDLocalColorRingModel *colorRingModel;
@property (retain, nonatomic) AFDLocalIMBizInfoModel *imBizInfoModel;
@property (retain, nonatomic) AFDLocalMateModel *mateModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *blockModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *reverseBlockModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *notShowModel;
@property (retain, nonatomic) AFDLocalPrivacyCommonModel *notOtherShowModel;
@property (retain, nonatomic) AFDLocalRecommendReasonModel *familiarModel;
@property (retain, nonatomic) AFDLocalStoryStatusModel *storyStatusModel;
@property (copy, nonatomic) NSString *rowID;
@property (copy, nonatomic) NSString *scene;

+ (id)userModelJSONTransformer;
+ (id)blockModelJSONTransformer;
+ (id)reverseBlockModelJSONTransformer;
+ (id)notShowModelJSONTransformer;
+ (id)notOtherShowModelJSONTransformer;
+ (id)mateModelJSONTransformer;
+ (id)followModelJSONTransformer;
+ (id)friendModelJSONTransformer;
+ (id)closeFriendsModelJSONTransformer;
+ (id)colorRingModelJSONTransformer;
+ (id)imBizInfoModelJSONTransformer;
+ (id)storyStatusModelJSONTransformer;
+ (id)familiarModelJSONTransformer;
+ (id)allSyncTableNames;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithBaseModel:(id)a0 tableName:(id)a1;
- (id)initWithMultiModel:(id)a0;
- (id)propertyNameWithTableName:(id)a0;
- (id)currentModelWithTableName:(id)a0;
- (void)enumeratePropertyClassUsingBlock:(id /* block */)a0;
- (id)initWithIMUser:(id)a0;
- (void).cxx_destruct;

@end
