@class NSString, AWEURLModel, AWEIMLiveGroupAnnouncementSubscribeInfo;

@interface AWEIMLiveGroupAnnouncementSampleInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo *subscribeInfo;
@property (copy, nonatomic) NSString *senderNickName;
@property (retain, nonatomic) AWEURLModel *senderAvatar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
