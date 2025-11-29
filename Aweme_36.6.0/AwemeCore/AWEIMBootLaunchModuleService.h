@class BFTaskCompletionSource, NSString;

@interface AWEIMBootLaunchModuleService : HTSService <HTSService, AWEIMBootLaunchModuleService>

@property (retain, nonatomic) BFTaskCompletionSource *startIMTaskSource;
@property (nonatomic) BOOL hasLaunchOptions;
@property (nonatomic) BOOL isDefaultLanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long state;
@property (nonatomic) long long startIMSource;
@property (nonatomic) BOOL isFromPush;
@property (nonatomic) double initTime;

- (BOOL)enableFeedReadyBootLaunchIM:(long long)a0;
- (long long)getStartIMState;
- (id)runFeedReadyIMTask:(long long)a0;
- (void)executeIMBootLaunchImmediately:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
