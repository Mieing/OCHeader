@class NSString, AWEIMLiveGroupAnnouncementRemindInfo, AWEIMLiveGroupAnnouncementSubscribeInfo;

@interface AWEIMLiveGroupAnnouncementInfo : AWEBaseApiModel

@property (nonatomic) long long announcementId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long scheduleTimeInLongLong;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo *subscribeInfo;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementRemindInfo *remindInfo;
@property (nonatomic) BOOL canSend;

+ (id)subscribeInfoJSONTransformer;
+ (id)remindInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
