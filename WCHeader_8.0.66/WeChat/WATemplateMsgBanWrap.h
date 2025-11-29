@class NSString;

@interface WATemplateMsgBanWrap : MMObject <PBCoding>

@property (copy, nonatomic) NSString *appUsername;
@property (copy, nonatomic) NSString *appNickname;
@property (copy, nonatomic) NSString *avatarURLString;
@property (nonatomic) BOOL isBanned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appUsername;
+ (void)PBArrayAdd_appNickname;
+ (void)PBArrayAdd_avatarURLString;
+ (void)PBArrayAdd_isBanned;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
