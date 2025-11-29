@class NSData;

@interface KvDataItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int logid;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) unsigned int starttime;
@property (nonatomic) unsigned int endtime;
@property (nonatomic) unsigned int count;

+ (void)initialize;

- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setEndtime:(unsigned int)a0;
- (unsigned int)endtime;
- (void)setStarttime:(unsigned int)a0;
- (unsigned int)starttime;
- (void)setValue:(id)a0;
- (id)value;
- (void)setLogid:(unsigned int)a0;
- (unsigned int)logid;

@end
