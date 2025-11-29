@class NSString;

@interface WCNewClickAppStatData : MMObject <PBCoding>

@property (nonatomic) unsigned int firstEnterTS;
@property (nonatomic) unsigned int lastQuitTS;
@property (nonatomic) int interval;
@property (nonatomic) int backgroundInterval;
@property (nonatomic) unsigned int switchCount;
@property (nonatomic) unsigned int realSwitchCount;
@property (nonatomic) int realInterval;
@property (nonatomic) int realBackgroundInterval;
@property (nonatomic) unsigned int realFirstEnterTS;
@property (nonatomic) unsigned int realLastQuitTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_firstEnterTS;
+ (void)PBArrayAdd_lastQuitTS;
+ (void)PBArrayAdd_interval;
+ (void)PBArrayAdd_backgroundInterval;
+ (void)PBArrayAdd_switchCount;
+ (void)PBArrayAdd_realInterval;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
