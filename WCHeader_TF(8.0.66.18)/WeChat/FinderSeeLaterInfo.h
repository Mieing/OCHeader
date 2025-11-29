@class NSString;

@interface FinderSeeLaterInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int addTime;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setAddTime:(unsigned int)a0;
- (unsigned int)addTime;
- (void)setWording:(id)a0;
- (id)wording;
- (id)description;
- (id)archivedWCTValue;

@end
