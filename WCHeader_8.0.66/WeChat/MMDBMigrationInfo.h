@class NSString, NSDate;

@interface MMDBMigrationInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSDate *start;
@property (retain, nonatomic) NSDate *end;
@property (nonatomic) long long size;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL hasCheckEnd;
@property (nonatomic) int checkEndTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_disable;
+ (void)PBArrayAdd_hasCheckEnd;
+ (void)PBArrayAdd_checkEndTimes;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
