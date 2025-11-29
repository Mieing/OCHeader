@class NSString;

@interface WCHomepageYearMonthData : NSObject <PBCoding>

@property (nonatomic) unsigned int year;
@property (nonatomic) unsigned int month;
@property (nonatomic) unsigned long long lastId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_year;
+ (void)PBArrayAdd_month;
+ (void)PBArrayAdd_lastId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithSnsYearMonthData:(id)a0;
- (BOOL)isEqualToYearMonthData:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
