@class NSString;

@interface WAPrefetchMark : NSObject <PBCoding>

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long appVersion;
@property (nonatomic) unsigned int reportKey;
@property (nonatomic) unsigned int packageType;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *appid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_reportKey;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_appid;
+ (void)initialize;

@end
