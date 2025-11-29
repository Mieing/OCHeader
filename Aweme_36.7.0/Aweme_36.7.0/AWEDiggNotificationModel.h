@class AWEAwemeModel, NSString, NSArray, AWENoticeRedPacketInfoModel, AWEDiggNotificationIMSourceModel, AWEURLModel, AWEVSNoticeDetailModel, NSMutableArray, AWECommentModel, AWERelationDynamicLable, NSNumber, AWEDiggNotificationDanmakuInfoModel;

@interface AWEDiggNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSMutableArray *fromUser;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *mergeCount;
@property (nonatomic) long long diggType;
@property (retain, nonatomic) NSNumber *cid;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (retain, nonatomic) NSString *forWardID;
@property (nonatomic) long long interestGroupID;
@property (retain, nonatomic) AWECommentModel *comment;
@property (nonatomic) BOOL hasDiggList;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) BOOL commentUnvisible;
@property (retain, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (retain, nonatomic) AWENoticeRedPacketInfoModel *redPacketInfo;
@property (retain, nonatomic) AWEURLModel *diggedMediumAvatarURL;
@property (retain, nonatomic) AWEURLModel *diggedBigAvatarURL;
@property (retain, nonatomic) AWEVSNoticeDetailModel *vsNoticeDetail;
@property (copy, nonatomic) NSString *cooperationInfo;
@property (retain, nonatomic) AWEDiggNotificationDanmakuInfoModel *danmakuInfo;
@property (retain, nonatomic) AWEDiggNotificationIMSourceModel *imSource;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSString *supplement;
@property (copy, nonatomic) NSArray *actionBarModelArray;
@property (nonatomic) BOOL isAICloneComment;

+ (id)awemeListJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)redPacketInfoJSONTransformer;
+ (id)vsNoticeDetailJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)actionBarModelArrayJSONTransformer;
+ (id)danmakuInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDiggPolymeric;
- (void).cxx_destruct;

@end
