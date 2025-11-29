@class NSString;

@interface AWEUserVCDServiceImp : HTSService <AWEUserVCDService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)vcdV2Enable;
+ (void)authorizeWithScope:(id)a0 complete:(id /* block */)a1;
+ (void)authorizeWithScope:(id)a0 secondaryUid:(id)a1 shouldUnbind:(BOOL)a2 complete:(id /* block */)a3;
+ (Class)aAWEUserNotSyncToOtherAppidAdapterClass;

- (id)aAWEUserNotSyncToOtherAppidAdapter;

@end
