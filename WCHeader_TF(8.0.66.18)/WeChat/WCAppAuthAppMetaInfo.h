@class NSString;

@interface WCAppAuthAppMetaInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeDesc;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *wordingInScope;
@property (nonatomic) unsigned int appType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appTypeDesc;
+ (void)PBArrayAdd_appType;
+ (void)initialize;

@end
