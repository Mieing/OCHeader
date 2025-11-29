@class NSString, CalendarInfo, NSMutableArray;

@interface CalendarStatisticsArgs : MMObject <PBCoding> {
    BOOL isEnterFinderWithRedDot;
}

@property (retain, nonatomic) CalendarInfo *discoverInfo;
@property (retain, nonatomic) CalendarInfo *finderInfo;
@property (retain, nonatomic) CalendarInfo *liveInfo;
@property (retain, nonatomic) NSMutableArray *finderExposeTimeArray;
@property (retain, nonatomic) NSMutableArray *liveExposeTimeArray;
@property (nonatomic) unsigned int dropRedDotCount;
@property (nonatomic) unsigned int deepReadCount;
@property (nonatomic) unsigned int lastEnterFinderTimeSec;
@property (nonatomic) unsigned int lastExitFinderTimeSec;
@property (nonatomic) unsigned int lastFinderVvCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_discoverInfo;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_liveInfo;
+ (void)PBArrayAdd_finderExposeTimeArray;
+ (void)PBArrayAdd_liveExposeTimeArray;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_lastEnterFinderTimeSec;
+ (void)PBArrayAdd_lastExitFinderTimeSec;
+ (void)PBArrayAdd_lastFinderVvCount;
+ (void)initialize;
+ (id)loadFromMMKV;

- (id)getPBPropertyTable;
- (id)init;
- (void)save;
- (void)checkToNoteFinderEnterTime:(unsigned int)a0 andExitTime:(unsigned int)a1;
- (void)enterFindFriendEntryController:(id)a0 andStayTimeMs:(unsigned long long)a1;
- (void)quitFindFriendEntryController:(id)a0 andNext:(id)a1 andStayTimeMs:(unsigned long long)a2;
- (unsigned int)genDayStr:(unsigned long long)a0;
- (void).cxx_destruct;

@end
