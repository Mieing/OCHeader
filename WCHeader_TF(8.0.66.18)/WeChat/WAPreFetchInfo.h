@class NSString;

@interface WAPreFetchInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *fetchData;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned long long lastModifyTimeMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_fetchData;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_lastModifyTimeMs;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
