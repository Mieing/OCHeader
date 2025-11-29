@class NSArray, NSString;

@interface WCFinderLiveIdentityModel : NSObject <PBCoding>

@property (copy, nonatomic) NSArray *aliasInfoArray;
@property (nonatomic) unsigned long long currentAliasRoleType;
@property (nonatomic) unsigned long long aliasRoleModAvailableTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_currentAliasRoleType;
+ (void)PBArrayAdd_aliasInfoArray;
+ (void)PBArrayAdd_aliasRoleModAvailableTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)a0;
- (id)currentAliasInfo;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
