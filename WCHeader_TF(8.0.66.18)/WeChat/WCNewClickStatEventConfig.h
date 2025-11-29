@class NSString, NSArray;

@interface WCNewClickStatEventConfig : MMObject <PBCoding>

@property (nonatomic) unsigned int eventID;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int logid;
@property (retain, nonatomic) NSString *regType;
@property (retain, nonatomic) NSArray *arrPageConfig;
@property (retain, nonatomic) NSArray *arrSpecialPVPageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_eventID;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_sampleRate;
+ (void)PBArrayAdd_logid;
+ (void)PBArrayAdd_regType;
+ (void)PBArrayAdd_arrPageConfig;
+ (void)PBArrayAdd_arrSpecialPVPageConfig;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
