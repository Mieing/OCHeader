@class NSString;

@interface AWEDouyinRiskControlServiceImp : HTSService <AWERiskControlService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)upSMSVerify:(id)a0 completion:(id /* block */)a1;
- (void)downSMSVerify:(id)a0 completion:(id /* block */)a1;

@end
