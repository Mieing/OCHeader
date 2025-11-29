@interface DIRSEventObserver : NSObject <NSCopying>

@property (nonatomic) unsigned long long frequencyThreshold;
@property (copy, nonatomic) id /* block */ frequencyAlarmBlock;
@property (nonatomic) unsigned long long lengthThreshold;
@property (copy, nonatomic) id /* block */ lengthAlarmBlock;
@property (copy, nonatomic) id /* block */ onEventAccepted;
@property (copy, nonatomic) id /* block */ onEventDropped;
@property (copy, nonatomic) id /* block */ onEventStored;
@property (copy, nonatomic) id /* block */ onEventUploaded;

- (void)setEventFrequencyAlarm:(id /* block */)a0 exceed:(unsigned long long)a1;
- (void)setEventLengthAlarm:(id /* block */)a0 exceed:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
