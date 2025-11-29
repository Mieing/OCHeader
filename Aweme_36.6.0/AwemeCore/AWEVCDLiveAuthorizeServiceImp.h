@class NSString;

@interface AWEVCDLiveAuthorizeServiceImp : HTSService <AWEVCDLiveAuthorizeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)authorizeAccountAlert:(id /* block */)a0 text:(id)a1 didShowBlock:(id /* block */)a2 enterFrom:(id)a3 complete:(id /* block */)a4;
+ (void)relationAccountAlert:(id /* block */)a0 text:(id)a1 didShowBlock:(id /* block */)a2 enterFrom:(id)a3 complete:(id /* block */)a4;


@end
