@class NSString;

@interface AWEThirdPlatformShareServiceImpl : NSObject <AWEThirdPlatformShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isPlatformAvailable:(long long)a0;
- (BOOL)isPlatformInstalled:(long long)a0;
- (BOOL)openAppWithPlatform:(long long)a0;
- (void)openAppWithPlatform:(long long)a0 completion:(id /* block */)a1;
- (void)shareWithModel:(id)a0 toPlatform:(long long)a1 completion:(id /* block */)a2;
- (void)openAppWithPlatform:(long long)a0 delay:(double)a1 completion:(id /* block */)a2;
- (BOOL)handleOpenURL:(id)a0;

@end
