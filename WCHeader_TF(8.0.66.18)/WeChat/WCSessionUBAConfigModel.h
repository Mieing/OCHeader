@class NSString, NSMutableArray;

@interface WCSessionUBAConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *sessionUBAConfigs;
@property (retain, nonatomic) NSString *originalJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionUBAConfigs;
+ (void)PBArrayAdd_originalJson;
+ (void)initialize;

@end
