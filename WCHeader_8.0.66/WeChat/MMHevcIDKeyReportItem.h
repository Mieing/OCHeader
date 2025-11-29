@interface MMHevcIDKeyReportItem : NSObject

@property (nonatomic) unsigned int ID;
@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned int value;

- (id)init:(unsigned int)a0 key:(unsigned long long)a1 value:(unsigned int)a2;

@end
