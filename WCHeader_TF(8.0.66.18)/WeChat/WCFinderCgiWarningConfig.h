@class NSString;

@interface WCFinderCgiWarningConfig : NSObject <PBCoding>

@property (nonatomic) long long cgiNumber;
@property (nonatomic) long long failCount;
@property (nonatomic) long long firstUpdateTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cgiNumber;
+ (void)PBArrayAdd_failCount;
+ (void)PBArrayAdd_firstUpdateTimeStamp;
+ (void)initialize;
+ (long long)genExpireDurationByCgiNumber:(long long)a0;
+ (long long)genFailLimitByCgiNumber:(long long)a0;

@end
