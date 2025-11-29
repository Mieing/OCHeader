@class NSString, NSDictionary;

@interface AWELastLoginUidFeature : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSString *lastLoginUid;
@property (nonatomic) unsigned long long lastLogoutSeconds;
@property (readonly, copy, nonatomic) NSDictionary *lastLoginInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)encryptedLastLoginUid;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
