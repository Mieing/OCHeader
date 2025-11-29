@class NSString, NSDictionary;

@interface ChatRoomPanelDynamicWeAppItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *enterId;
@property (nonatomic) unsigned int redDotFlag;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *weAppUserName;
@property (nonatomic) unsigned int weAppVersion;
@property (retain, nonatomic) NSString *weAppPagePath;
@property (nonatomic) unsigned int weAppDebugMode;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSDictionary *weAppTitleDic;
@property (retain, nonatomic) NSDictionary *weAppDescDic;
@property (retain, nonatomic) NSString *weAppIconUrl;
@property (retain, nonatomic) NSString *weAppDarkIconUrl;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *weAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enterId;
+ (void)PBArrayAdd_redDotFlag;
+ (void)PBArrayAdd_jumpType;
+ (void)PBArrayAdd_weAppUserName;
+ (void)PBArrayAdd_weAppVersion;
+ (void)PBArrayAdd_weAppPagePath;
+ (void)PBArrayAdd_weAppDebugMode;
+ (void)PBArrayAdd_h5Url;
+ (void)PBArrayAdd_weAppTitleDic;
+ (void)PBArrayAdd_weAppDescDic;
+ (void)PBArrayAdd_weAppIconUrl;
+ (void)PBArrayAdd_weAppDarkIconUrl;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_weAppId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
