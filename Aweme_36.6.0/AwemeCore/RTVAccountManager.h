@class NSString;

@interface RTVAccountManager : NSObject <RTVAccountManagerInterface>

@property (nonatomic) BOOL isLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveVoIPPayload:(id)a0 isFromColdLaunch:(BOOL)a1;

@end
