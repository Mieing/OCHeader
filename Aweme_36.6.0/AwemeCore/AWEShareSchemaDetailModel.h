@class AWEURLModel, AWEShareSchemaLongVideoModel, AWEShareSchemaSpecialConfigModel, NSDictionary, AWEShareSchemaVideoModel, AWEShareSchemaChallengeModel, AWEShareSchemaPOIModel, AWEShareSchemaLiveFormatModel, AWEShareSchemaCircleModel, AWEFavoriteFolderBaseInfoModel, NSString, AWEShareSchemaPlayRemoteModel, AWEShareSchemaGoodsModel, AWEShareSchemaPOIGoodsModel, AWEShareSchemaLiveModel, AWEConversationCellInfoModel, AWECouponModel, AWECodeGenCommandTransLongArticleModel;

@interface AWEShareSchemaDetailModel : AWEBaseApiModel

@property (retain, nonatomic) AWEShareSchemaVideoModel *videoModel;
@property (copy, nonatomic) NSString *liveUserName;
@property (copy, nonatomic) NSString *liveRoomData;
@property (copy, nonatomic) NSString *userNickName;
@property (retain, nonatomic) AWEShareSchemaChallengeModel *challengeModel;
@property (copy, nonatomic) NSString *musicTitle;
@property (copy, nonatomic) NSString *trendsTitle;
@property (copy, nonatomic) NSString *POIName;
@property (copy, nonatomic) NSString *POIRankName;
@property (copy, nonatomic) NSString *goodsName;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *templateTile;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) AWECouponModel *coupon;
@property (retain, nonatomic) AWEShareSchemaGoodsModel *goodsModel;
@property (retain, nonatomic) AWEShareSchemaPOIModel *poiModel;
@property (retain, nonatomic) AWEShareSchemaPOIGoodsModel *poiGoodsModel;
@property (retain, nonatomic) AWEShareSchemaPlayRemoteModel *playRemoteModel;
@property (retain, nonatomic) AWEShareSchemaLiveFormatModel *formatModel;
@property (retain, nonatomic) AWEShareSchemaSpecialConfigModel *configModel;
@property (retain, nonatomic) AWEShareSchemaLiveModel *liveRoomModel;
@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *reposterName;
@property (copy, nonatomic) NSString *mixName;
@property (retain, nonatomic) AWEShareSchemaCircleModel *circleModel;
@property (copy, nonatomic) NSString *playletName;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectionInfo;
@property (retain, nonatomic) AWEShareSchemaLongVideoModel *longVideoModel;
@property (retain, nonatomic) AWECodeGenCommandTransLongArticleModel *articleModel;
@property (nonatomic) BOOL isCloseFriend;
@property (nonatomic) BOOL isFriend;
@property (nonatomic) BOOL isPrivateAccount;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) AWEConversationCellInfoModel *conversationCellInfoModel;
@property (nonatomic) long long hasAppointment;
@property (copy, nonatomic) NSDictionary *aiSearchInfo;

+ (id)avatarURLJSONTransformer;
+ (id)videoModelJSONTransformer;
+ (id)challengeModelJSONTransformer;
+ (id)goodsModelJSONTransformer;
+ (id)playRemoteModelJSONTransformer;
+ (id)formatModelJSONTransformer;
+ (id)circleModelJSONTransformer;
+ (id)collectionInfoJSONTransformer;
+ (id)configModelJSONTransformer;
+ (id)longVideoModelJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
