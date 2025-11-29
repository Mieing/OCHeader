@interface FinderRingtoneConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int thresholdWithoutName;
@property (nonatomic) unsigned int thresholdWithName;
@property (nonatomic) unsigned int setRingtoneFrequencyLimit;
@property (nonatomic) unsigned int notifyFrequencyLimit;
@property (nonatomic) unsigned int showRingtoneDailyMaxcount;
@property (nonatomic) unsigned int showRingtoneDailyMaxcountLessFrequent;
@property (nonatomic) BOOL userpageShowRingtone;

+ (void)initialize;

- (void)setUserpageShowRingtone:(BOOL)a0;
- (BOOL)userpageShowRingtone;
- (void)setShowRingtoneDailyMaxcountLessFrequent:(unsigned int)a0;
- (unsigned int)showRingtoneDailyMaxcountLessFrequent;
- (void)setShowRingtoneDailyMaxcount:(unsigned int)a0;
- (unsigned int)showRingtoneDailyMaxcount;
- (void)setNotifyFrequencyLimit:(unsigned int)a0;
- (unsigned int)notifyFrequencyLimit;
- (void)setSetRingtoneFrequencyLimit:(unsigned int)a0;
- (unsigned int)setRingtoneFrequencyLimit;
- (void)setThresholdWithName:(unsigned int)a0;
- (unsigned int)thresholdWithName;
- (void)setThresholdWithoutName:(unsigned int)a0;
- (unsigned int)thresholdWithoutName;

@end
