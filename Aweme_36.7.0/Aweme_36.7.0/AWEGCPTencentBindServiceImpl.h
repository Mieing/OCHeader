@class NSString;

@interface AWEGCPTencentBindServiceImpl : NSObject <IESGCPTencentBindService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isQQInstalled;
- (unsigned long long)getWXMiniProgramType;
- (BOOL)isWechatInstalled;
- (void)openWechatMiniProgramWithUserName:(id)a0 miniProgramPath:(id)a1 completion:(id /* block */)a2;
- (void)openTencentMiniProgramWithPlatform:(long long)a0 miniProgramID:(id)a1 miniProgramPath:(id)a2 completion:(id /* block */)a3;

@end
