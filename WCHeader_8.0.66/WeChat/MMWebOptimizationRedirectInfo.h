@class NSString;

@interface MMWebOptimizationRedirectInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referUrl;
@property (copy, nonatomic) NSString *redirectUrl;
@property (nonatomic) unsigned int maxCacheTime;
@property (nonatomic) unsigned int lastModifiedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_referUrl;
+ (void)PBArrayAdd_redirectUrl;
+ (void)PBArrayAdd_maxCacheTime;
+ (void)PBArrayAdd_lastModifiedTime;
+ (void)initialize;

@end
