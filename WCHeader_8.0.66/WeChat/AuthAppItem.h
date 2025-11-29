@class NSString;

@interface AuthAppItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appIconURL;
@property (retain, nonatomic) NSString *appTypeList;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) int appSettingFlag;
@property (retain, nonatomic) NSString *devInfo;
@property (retain, nonatomic) NSString *authInfo;
@property (retain, nonatomic) NSString *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appIconURL;
+ (void)PBArrayAdd_appTypeList;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appSettingFlag;
+ (void)PBArrayAdd_devInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
