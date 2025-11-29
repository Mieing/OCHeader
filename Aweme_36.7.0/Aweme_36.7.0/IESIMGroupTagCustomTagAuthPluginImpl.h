@class NSString;

@interface IESIMGroupTagCustomTagAuthPluginImpl : NSObject <IESIMGroupTagCustomTagAuthPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)acquirePermissionForScopes:(id)a0 source:(id)a1 mpID:(id)a2 onShow:(id /* block */)a3 onClick:(id /* block */)a4 extra:(id)a5 completion:(id /* block */)a6;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
