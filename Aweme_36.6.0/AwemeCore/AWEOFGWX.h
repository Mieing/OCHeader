@class NSString;

@interface AWEOFGWX : HTSService <AWEOFGWX>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)sendReq:(id)a0 completion:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;


@end
