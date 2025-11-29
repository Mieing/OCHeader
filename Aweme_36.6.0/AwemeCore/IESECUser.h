@class NSString;

@interface IESECUser : NSObject <TTAccountMulticastProtocol, IESECUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHostLogin;
+ (id)currentHostUserID;
+ (id)sharedInstance;
+ (void)setup;

- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;

@end
