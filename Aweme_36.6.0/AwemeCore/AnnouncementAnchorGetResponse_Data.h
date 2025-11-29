@class NSDate, NSString, AnnouncementData, NSMutableArray, AnnouncementAnchorGetResponse_SubscribeInfo, RedPacket, GPBInt64Array, GPBInt32Array;

@interface AnnouncementAnchorGetResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *subscribeCountStr;
@property (retain, nonatomic) AnnouncementData *attachAnnouncement;
@property (retain, nonatomic) NSDate *expireDate;
@property (retain, nonatomic) RedPacket *relateRedPacket;
@property (nonatomic) BOOL redPacketLocalRelated;
@property (copy, nonatomic) NSString *latestLiveTimestamp;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL switch_p;
@property (nonatomic) BOOL switchCanOpen;
@property (nonatomic) int banned;
@property (nonatomic) long long banFinishTime;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int auditStatus;
@property (nonatomic) int updateLimit;
@property (nonatomic) BOOL reachUpdateLimit;
@property (nonatomic) BOOL groupSwitch;
@property (retain, nonatomic) GPBInt64Array *groupIdListArray;
@property (readonly, nonatomic) unsigned long long groupIdListArray_Count;
@property (retain, nonatomic) NSMutableArray *allGroupListArray;
@property (readonly, nonatomic) unsigned long long allGroupListArray_Count;
@property (nonatomic) long long groupRemindTime;
@property (nonatomic) int banType;
@property (retain, nonatomic) AnnouncementAnchorGetResponse_SubscribeInfo *subscribeInfo;
@property (nonatomic) BOOL hasSubscribeInfo;
@property (nonatomic) BOOL appointmentContainerOpen;
@property (nonatomic) BOOL stickerBan;
@property (copy, nonatomic) NSString *stickerBanToast;
@property (nonatomic) int autoPublishHighlight;
@property (nonatomic) long long announcementId;
@property (retain, nonatomic) GPBInt64Array *videoItemIdsArray;
@property (readonly, nonatomic) unsigned long long videoItemIdsArray_Count;
@property (nonatomic) long long factionBrokerId;
@property (nonatomic) BOOL showRedPacket;
@property (retain, nonatomic) NSMutableArray *redPacketsArray;
@property (readonly, nonatomic) unsigned long long redPacketsArray_Count;

+ (id)modelWithConfig:(id)a0;
+ (id)modelWithConfig:(id)a0 originModel:(id)a1;
+ (id)modelWithAnnouncementData:(id)a0;
+ (id)descriptor;

- (id)subscribeCountStr;
- (id)detailContent;
- (int)intDateFromDate:(id)a0;
- (id)toDaysArrayFromNumber:(id)a0;
- (double)calculateNextLiveTimestamp:(id)a0;
- (void)setSubscribeCountStr:(id)a0;
- (id)weekDaysToScheduleDays;
- (id)scheduleDateToNSDate;
- (id)boradcastConfig;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
