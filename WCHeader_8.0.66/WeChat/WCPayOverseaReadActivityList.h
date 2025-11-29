@class NSString, NSMutableSet;

@interface WCPayOverseaReadActivityList : NSObject <PBCoding>

@property (nonatomic) unsigned int m_tpaCountry;
@property (retain, nonatomic) NSMutableSet *m_set;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_set;
+ (void)initialize;
+ (id)cacheObjectWithTpaCountry:(unsigned int)a0;
+ (id)cacheObjectWithTpaCountryV2:(unsigned int)a0;
+ (id)getSaveRootDir;
+ (id)getSavePathWithTpaCountry:(unsigned int)a0;
+ (id)getSavePathWithTpaCountryV2:(unsigned int)a0;
+ (void)checkFileWithTpaCountry:(unsigned int)a0;
+ (void)checkFileWithTpaCountryV2:(unsigned int)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)addReadActivityId:(id)a0;
- (BOOL)hasReadActivityId:(id)a0;
- (void)saveToCache;
- (void)saveToCacheV2;
- (void).cxx_destruct;

@end
