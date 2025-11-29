@class AWEIMLiveGroupAnnouncementSubscribeInfo;

@interface AWEIMLiveGroupAnnouncementLiveStatusResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long liveStatus;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo *subscribeInfo;
@property (nonatomic) long long roomId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
