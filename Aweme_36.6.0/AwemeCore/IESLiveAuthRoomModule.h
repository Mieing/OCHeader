@class NSString;

@interface IESLiveAuthRoomModule : IESLiveModule <IESLiveAuthModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAndShowAuthorizationGuideWithSource:(unsigned long long)a0 completeBlock:(id /* block */)a1;

@end
