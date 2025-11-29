@class NSString;

@interface AWEUlikeJumpAppService : HTSService <AWEUlikeJumpAppService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)routerToUlikeApplicationURL:(id)a0 completion:(id /* block */)a1;
+ (void)routerToUlikeZlinkURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (BOOL)presentUlikeInstallPage:(id)a0;
+ (id)ulikeItunesID;
+ (id)ulikeZlink;


@end
