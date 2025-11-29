@class NSString;

@interface BDPAlbumPermissionScopeHg : NSObject <BDPPermissionScopeEntityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (long long)freeType;
- (id)title:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (void)forceRequestPermission:(id)a0 completion:(id /* block */)a1;
- (void)footerView:(id)a0 completion:(id /* block */)a1;
- (void)contentView:(id)a0 completion:(id /* block */)a1;
- (void)preCheck:(id)a0 completion:(id /* block */)a1;
- (id)eventName;

@end
