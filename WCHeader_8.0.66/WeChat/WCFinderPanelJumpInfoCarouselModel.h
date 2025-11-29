@class NSString, NSMutableArray;

@interface WCFinderPanelJumpInfoCarouselModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) int businessType;
@property (retain, nonatomic) NSMutableArray *showTimeStampArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_showTimeStampArray;
+ (void)initialize;

- (id)getPBPropertyTable;
- (long long)getMaxTimeStamp;
- (id)getTodayTimeStamps;
- (id)maxValueInArray:(id)a0;
- (id)todayTimeStampsInArray:(id)a0;
- (void).cxx_destruct;

@end
