@class MemoryMappedKV, NSString;

@interface MMFrequencyChecker : NSObject {
    MemoryMappedKV *mmkv;
    NSString *module;
}

@property (nonatomic) unsigned int LastTriggerTimeStamp;
@property (nonatomic) unsigned int FirstTriggerTimeStamp;
@property (nonatomic) unsigned int TriggeredTimes;

- (unsigned int)LastTriggerTimeStamp;
- (void)setLastTriggerTimeStamp:(unsigned int)a0;
- (unsigned int)FirstTriggerTimeStamp;
- (void)setFirstTriggerTimeStamp:(unsigned int)a0;
- (unsigned int)TriggeredTimes;
- (void)setTriggeredTimes:(unsigned int)a0;
- (id)initWithID:(id)a0;
- (BOOL)canTriggerWithInterval:(unsigned long long)a0 forSubModule:(id)a1;
- (BOOL)canTriggerWithInterval:(unsigned long long)a0 maxTriggerTimes:(unsigned long long)a1 resetPeriod:(unsigned long long)a2;
- (void)invalid;
- (void)resetLimit;
- (void).cxx_destruct;

@end
