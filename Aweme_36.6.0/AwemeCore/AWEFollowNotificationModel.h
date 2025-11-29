@class NSString, AWEFollowNotificationDetail, AWENoticeRedPacketInfoModel, NSArray, AWEUserModel, AWERelationDynamicLable;

@interface AWEFollowNotificationModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEUserModel *fromUser;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (nonatomic) unsigned long long followBtnType;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *fromPre;
@property (retain, nonatomic) AWEFollowNotificationDetail *detail;
@property (nonatomic) long long contentSource;
@property (retain, nonatomic) AWENoticeRedPacketInfoModel *redPacketInfo;
@property (retain, nonatomic) NSArray *itemList;
@property (copy, nonatomic) NSString *leaveMsg;
@property (nonatomic) BOOL showFollowBtn;

+ (id)detailJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)redPacketInfoJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
