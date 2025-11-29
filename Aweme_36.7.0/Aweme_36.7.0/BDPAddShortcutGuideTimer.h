@class NSString, NSTimer, NSDictionary, BDPUniqueID;

@interface BDPAddShortcutGuideTimer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL hasClickAddDesktop;
@property (copy, nonatomic) NSString *localGuideViewShowDatesKey;

- (BOOL)checkScene;
- (BOOL)canPopAddShortcutGuideView;
- (void)updateGuideViewShowTimeDatesLocally;
- (BOOL)checkSettings;
- (BOOL)checkShowTimesLimit;
- (id)localGuideViewShowDates;
- (BOOL)hasShownGuideViewTodayWithDate:(id)a0;
- (BOOL)hasReachedMaxShowTimesThisWeekWithDates:(id)a0;
- (int)maxShowTimesAWeek;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (double)delayTime;
- (id)initWithUniqueID:(id)a0;

@end
