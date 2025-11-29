@class NSString;

@interface CgiReportItemMiddleData : MMObject <PBCoding>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long lastReportTimeMs;
@property (nonatomic) unsigned int count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_lastReportTimeMs;
+ (void)PBArrayAdd_count;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
