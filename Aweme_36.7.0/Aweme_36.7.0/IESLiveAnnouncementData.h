@class NSArray, NSString;

@interface IESLiveAnnouncementData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL available;
@property (nonatomic) BOOL switch_p;
@property (nonatomic) BOOL switchCanOpen;
@property (nonatomic) int banned;
@property (nonatomic) long long banFinishTime;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) NSArray *scheduledWeekdaysArray;
@property (nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int auditStatus;
@property (nonatomic) int updateLimit;
@property (nonatomic) BOOL reachUpdateLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduledWeekdaysArrayAttrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)pbAnnouncement;

@end
