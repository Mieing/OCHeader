@class NSString;

@interface AWEIMInitJobManagerSdkUserObserver : NSObject <IESIMLoginManagerMessage>

@property (class, readonly, nonatomic) AWEIMInitJobManagerSdkUserObserver *sharedInstance;

@property (nonatomic) BOOL hasLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)observe;

@end
