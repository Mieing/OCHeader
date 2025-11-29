@class NSString;

@interface IESIMServiceCenterSdkObserver : NSObject <IESIMLoginManagerDetailMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)iesim_beforeAnyDidFinishLoginCalled;
- (void)iesim_afterAllDidFinishLogoutCalled;
- (void)observe;

@end
