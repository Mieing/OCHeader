@class NSNumber, NSString;

@interface IESLiveAnnouncementRequestParams : NSObject

@property (nonatomic) NSNumber *scheduledTime;
@property (nonatomic) NSNumber *scheduledDate;
@property (copy, nonatomic) NSString *scheduledWeekdays;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL groupSwitch;
@property (retain, nonatomic) NSNumber *groupRemindTime;
@property (copy, nonatomic) NSString *groupIDList;
@property (nonatomic) BOOL autoPublishHighlight;
@property (retain, nonatomic) NSString *videoItemIds;
@property (nonatomic) BOOL modifyBindVideo;
@property (nonatomic) long long announcementID;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *redPacketOrderNo;

- (void).cxx_destruct;
- (id)dictionary;
- (id)actionDictionary;

@end
