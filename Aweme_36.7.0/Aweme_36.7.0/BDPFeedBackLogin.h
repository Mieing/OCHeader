@class NSDictionary, NSString;

@interface BDPFeedBackLogin : NSObject <BDPApplicationNotificationMessage>

@property (nonatomic) BOOL didLogin;
@property (nonatomic) BOOL appEnterBackGround;
@property (retain, nonatomic) NSDictionary *loginData;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) unsigned long long loginResult;
@property (copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (id)initWithAppID:(id)a0;
- (void)loginWithState:(BOOL)a0;
- (void)loginWeakWithState:(BOOL)a0;
- (void)loginWithForce:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
