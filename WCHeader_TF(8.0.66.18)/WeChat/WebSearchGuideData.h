@class NSString;

@interface WebSearchGuideData : MMObject <PBCoding>

@property (nonatomic) unsigned long long expiredTime;
@property (retain, nonatomic) NSString *json;
@property (retain, nonatomic) NSString *searchID;
@property (nonatomic) BOOL isPreloadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_json;
+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_isPreloadData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
