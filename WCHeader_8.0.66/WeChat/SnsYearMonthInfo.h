@interface SnsYearMonthInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int year;
@property (nonatomic) unsigned int month;
@property (nonatomic) unsigned long long lastId;

+ (void)initialize;

- (void)setLastId:(unsigned long long)a0;
- (unsigned long long)lastId;
- (void)setMonth:(unsigned int)a0;
- (unsigned int)month;
- (void)setYear:(unsigned int)a0;
- (unsigned int)year;

@end
