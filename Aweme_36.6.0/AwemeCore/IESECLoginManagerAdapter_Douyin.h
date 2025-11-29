@class NSString;

@interface IESECLoginManagerAdapter_Douyin : NSObject <IESECLoginManagerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requireLogin:(id /* block */)a0 withContext:(id)a1;
- (BOOL)isLogin;

@end
