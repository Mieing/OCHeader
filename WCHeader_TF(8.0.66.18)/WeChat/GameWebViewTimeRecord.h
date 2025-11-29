@interface GameWebViewTimeRecord : MMObject {
    unsigned long long _timeArray[5];
    unsigned long long _a8KeyStartTime;
    unsigned long long _a8KeyFinishTime;
    unsigned long long _preverifyStartTime;
    unsigned long long _preverifyFinishTime;
    unsigned long long _userClickToCreateTime;
}

@property (readonly, nonatomic) unsigned int initTimestamp;
@property (readonly, nonatomic) unsigned int initDuration;
@property (readonly, nonatomic) unsigned int idleDuration;
@property (readonly, nonatomic) unsigned int loadDuration;
@property (readonly, nonatomic) unsigned int renderDuration;
@property (readonly, nonatomic) unsigned int a8KeyDuration;
@property (readonly, nonatomic) unsigned int preverifyDuration;

- (void)markA8KeyStartTimeToCurrent;
- (void)markA8KeyFinishTimeToCurrent;
- (void)markPreverifyStartTimeToCurrent;
- (void)markPreverifyFinishTimeToCurrent;
- (void)markTimeToCurrentForType:(unsigned long long)a0;
- (unsigned long long)getTimeForType:(unsigned long long)a0;
- (void)markUserClickTime:(unsigned long long)a0;
- (unsigned int)getUserClickTime;
- (unsigned int)calculateDurationWithEndTimeType:(unsigned long long)a0;

@end
