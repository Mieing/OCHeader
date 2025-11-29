@class NSString;

@interface AWELaunchLandingSplashBlockTask : NSObject <AWEAwesomeSplashManagerMessage, AWEHPLandingBlockTaskProtocol>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)normalSplashGot;
- (void)awesomeSplashGot:(id)a0;
- (void)noAwesomeSplash;
- (void)blockWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
