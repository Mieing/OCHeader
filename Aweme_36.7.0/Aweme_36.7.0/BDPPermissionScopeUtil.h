@interface BDPPermissionScopeUtil : NSObject

+ (id)nameOfArrayWithGroupType:(id)a0 scope:(id)a1;
+ (id)descOfArrayWithGroupType:(id)a0 scope:(id)a1;
+ (void)tryToShowAlertNoPermissionWithDesc:(id)a0 uniqueID:(id)a1 scope:(id)a2 completion:(id /* block */)a3;
+ (id)getPermissionScopeAuthTime:(id)a0 uniqueID:(id)a1;
+ (id)itemArrayWithScopeType:(id)a0 ScopeList:(id)a1 uniqueID:(id)a2;
+ (long long)permissionItemShowPriorityWithGroupType:(id)a0 scope:(id)a1;
+ (void)updatePermissionScopeAccessRecord:(id)a0 uniqueID:(id)a1;
+ (id)arraySettingsFrom:(id)a0;
+ (id)permissionItemShowPriorityDictWithGroupType:(id)a0;
+ (id)getPermissionAccessRecord:(id)a0;
+ (id)cleanOutOfDateRecord:(id)a0;
+ (void)updatePermissionAccessRecord:(id)a0 sandbox:(id)a1;
+ (void)updatePermissionScopeAuthTime:(id)a0 uniqueID:(id)a1;

@end
