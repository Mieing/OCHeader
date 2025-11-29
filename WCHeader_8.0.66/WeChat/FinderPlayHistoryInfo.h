@interface FinderPlayHistoryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int breakpointTimeMs;
@property (nonatomic) unsigned long long lastPlayTime;
@property (nonatomic) unsigned int progressBarMs;
@property (nonatomic) BOOL showProgressBarMs;

+ (void)initialize;

- (void)setShowProgressBarMs:(BOOL)a0;
- (BOOL)showProgressBarMs;
- (void)setProgressBarMs:(unsigned int)a0;
- (unsigned int)progressBarMs;
- (void)setLastPlayTime:(unsigned long long)a0;
- (unsigned long long)lastPlayTime;
- (void)setBreakpointTimeMs:(unsigned int)a0;
- (unsigned int)breakpointTimeMs;

@end
