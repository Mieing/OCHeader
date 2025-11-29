@class NSString;

@interface AWEVCDAuthorizeShowAlertServiceImp : HTSService <AWEVCDAuthorizeShowAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorizeShowAlertManger;
+ (void)regularBar:(unsigned long long)a0 complete:(id /* block */)a1;
+ (void)showVCDAlert:(id)a0 scene:(unsigned long long)a1 needReport:(BOOL)a2 enterFrom:(id)a3 completion:(id /* block */)a4;


@end
