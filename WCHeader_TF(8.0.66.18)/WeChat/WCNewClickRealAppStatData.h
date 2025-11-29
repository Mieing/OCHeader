@class NSString;

@interface WCNewClickRealAppStatData : NSObject <PBCoding>

@property (nonatomic) unsigned int realSwitchCount;
@property (nonatomic) int realInterval;
@property (nonatomic) int realBackgroundInterval;
@property (nonatomic) unsigned int realFirstEnterTS;
@property (nonatomic) unsigned int realLastQuitTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_realInterval;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
