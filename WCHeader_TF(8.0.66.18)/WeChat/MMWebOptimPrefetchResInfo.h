@class NSString, NSData;

@interface MMWebOptimPrefetchResInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *manifestUrl;
@property (copy, nonatomic) NSString *referDomain;
@property (retain, nonatomic) NSData *hashId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSData *businessData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_manifestUrl;
+ (void)PBArrayAdd_referDomain;
+ (void)PBArrayAdd_hashId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_businessData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
