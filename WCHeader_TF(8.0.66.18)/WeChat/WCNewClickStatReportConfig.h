@class NSArray, NSData, NSString;

@interface WCNewClickStatReportConfig : MMObject <PBCoding>

@property (nonatomic) unsigned int configVersion;
@property (nonatomic) unsigned int nextUpdateInterval;
@property (nonatomic) unsigned int samplePeriod;
@property (retain, nonatomic) NSArray *arrEventConfig;
@property (retain, nonatomic) NSData *versionBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configVersion;
+ (void)PBArrayAdd_nextUpdateInterval;
+ (void)PBArrayAdd_samplePeriod;
+ (void)PBArrayAdd_arrEventConfig;
+ (void)PBArrayAdd_versionBuffer;
+ (void)initialize;
+ (id)reportConfigWithXml:(id)a0;

- (id)getPBPropertyTable;
- (BOOL)isMatchSpecialPVPage:(id)a0 prePage:(id)a1;
- (void).cxx_destruct;

@end
