@class NSString, NSDate;

@interface WCDBRepairRecord : NSObject <PBCoding>

@property (nonatomic) int tag;
@property (nonatomic) int repairTimes;
@property (retain, nonatomic) NSDate *lastRepairTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tag;
+ (void)PBArrayAdd_repairTimes;
+ (void)PBArrayAdd_lastRepairTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
