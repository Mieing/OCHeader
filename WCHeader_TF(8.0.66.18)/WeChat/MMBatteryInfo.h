@class NSString;

@interface MMBatteryInfo : NSObject <PBCoding, WCTColumnCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long batteryState;
@property (nonatomic) float batteryLevel;

+ (void)PBArrayAdd_batteryState;
+ (void)PBArrayAdd_batteryLevel;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)currentBatteryInfo;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;

@end
