@class NSString;

@interface IESIMSplashService : HTSService <IESIMSplashService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)splashDisappearNotification;

@end
