@class NSString, NSMutableDictionary;

@interface MMWebOptimPrefetchDomainInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableDictionary *dicResInfo;
@property (nonatomic) unsigned int openType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_dicResInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
