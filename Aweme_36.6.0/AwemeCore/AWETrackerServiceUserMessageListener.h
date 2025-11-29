@class NSString;

@interface AWETrackerServiceUserMessageListener : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dataIRISSetupUserIdentifiers;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;

@end
