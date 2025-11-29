@class NSString;

@interface WAMemoryPressureRecordItem : MMObject

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned long long interval;
@property (retain, nonatomic) NSString *recordDescription;

- (void).cxx_destruct;

@end
