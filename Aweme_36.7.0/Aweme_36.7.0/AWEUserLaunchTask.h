@class NSString;

@interface AWEUserLaunchTask : NSObject <BDUGAccountProtocol, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onAppLaunch;
+ (id)encryptedUserID;
+ (id)historicalUserIDs;
+ (void)setupBindDeviceTask;
+ (id)userID;
+ (id)sharedInstance;

@end
