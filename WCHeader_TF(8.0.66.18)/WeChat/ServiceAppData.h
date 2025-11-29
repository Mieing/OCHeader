@class NSString;

@interface ServiceAppData : MMObject <PBCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appNameEn;
@property (retain, nonatomic) NSString *appNameTW;
@property (retain, nonatomic) NSString *appNameHK;
@property (retain, nonatomic) NSString *appIconUrlAttView;
@property (retain, nonatomic) NSString *appIconUrlListView;
@property (retain, nonatomic) NSString *appForwardUrl;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int appInfoFlag;
@property (nonatomic) BOOL appNotShowNew;
@property (nonatomic) unsigned int appJumpType;
@property (nonatomic) unsigned int appShowFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appNameEn;
+ (void)PBArrayAdd_appNameTW;
+ (void)PBArrayAdd_appIconUrlAttView;
+ (void)PBArrayAdd_appForwardUrl;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_appInfoFlag;
+ (void)PBArrayAdd_appIconUrlListView;
+ (void)PBArrayAdd_appNotShowNew;
+ (void)PBArrayAdd_appJumpType;
+ (void)PBArrayAdd_appShowFlag;
+ (void)PBArrayAdd_appNameHK;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
