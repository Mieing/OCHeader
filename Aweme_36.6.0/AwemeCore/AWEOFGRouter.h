@class NSString;

@interface AWEOFGRouter : HTSService <AWEOFGRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)transferWithInstance:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)transferToURLString:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)transferToURLStringWithOfgClientKey:(id)a0 ofgAppID:(id)a1 ofgError:(id *)a2 format:(id)a3;
+ (id)viewControllerForURLString:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)canOpenURLString:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;


@end
