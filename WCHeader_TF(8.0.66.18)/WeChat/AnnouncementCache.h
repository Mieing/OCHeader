@class NSString, Announcement;

@interface AnnouncementCache : NSObject <PBCoding>

@property (retain, nonatomic) Announcement *announcement;
@property (nonatomic) BOOL clicked;
@property (nonatomic) unsigned int endTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_announcement;
+ (void)PBArrayAdd_clicked;
+ (void)PBArrayAdd_endTimestamp;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)outOfDate;
- (void).cxx_destruct;

@end
