@class NSString;

@interface AWELiveAuthorityServiceImpl : NSObject <IESLiveAuthorityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeLivePodcast;
- (void)checkLivePermission:(id /* block */)a0;

@end
