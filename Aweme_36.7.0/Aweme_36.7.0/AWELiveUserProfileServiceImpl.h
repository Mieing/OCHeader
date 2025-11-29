@class NSString;

@interface AWELiveUserProfileServiceImpl : NSObject <IESLiveUserProfileControllerFactory, IESLiveAWEUserProfileModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)profileControllerWithUID:(id)a0 secUID:(id)a1;
- (id)profileControllerWithUID:(id)a0 secUID:(id)a1 extraTrackParams:(id)a2;
- (void)openProfileExtensionAreaServiceWidgetPageWithEditing:(BOOL)a0 entranceSubType:(id)a1 params:(id)a2;

@end
