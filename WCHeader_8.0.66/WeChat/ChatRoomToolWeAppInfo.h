@class NSString;

@interface ChatRoomToolWeAppInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *appPagePath;
@property (retain, nonatomic) NSString *appNickName;
@property (retain, nonatomic) NSString *appIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_appUserName;
+ (void)PBArrayAdd_appPagePath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)copyFromOtherWeAppInfo:(id)a0;
- (id)genDBContactChatRoomToolWeApp;
- (void)copyFromDBWeAppInfo:(id)a0;
- (void).cxx_destruct;

@end
