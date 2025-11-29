@class NSString;

@interface AWELuckyCatLottieResourceManager : HTSService <AWELiteLottieResourceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)loadLOTCompositionFromURL:(id)a0 withMD5:(id)a1 lottieName:(id)a2 completion:(id /* block */)a3;
- (void)loadLottiesFromURL:(id)a0 withMD5:(id)a1 lottieName:(id)a2 inBackgroundThread:(BOOL)a3 completion:(id /* block */)a4;
- (void)loadLottiesFromURL:(id)a0 withMD5:(id)a1 lottieName:(id)a2 completion:(id /* block */)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
