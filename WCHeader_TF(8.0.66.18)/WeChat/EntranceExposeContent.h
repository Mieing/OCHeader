@class EntranceExposeContent_ExposeRecord;

@interface EntranceExposeContent : WXPBGeneratedMessage

@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *friendRecord;
@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *finderRecord;
@property (retain, nonatomic) EntranceExposeContent_ExposeRecord *liveRecord;
@property (nonatomic) unsigned int reportTime;

+ (void)initialize;

- (void)setReportTime:(unsigned int)a0;
- (unsigned int)reportTime;
- (void)setLiveRecord:(id)a0;
- (id)liveRecord;
- (void)setFinderRecord:(id)a0;
- (id)finderRecord;
- (void)setFriendRecord:(id)a0;
- (id)friendRecord;

@end
