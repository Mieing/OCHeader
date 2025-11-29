@class NSString, AWESiriIntentsModel;

@interface AWESiriIntentsHandler : NSObject <INPlayMediaIntentHandling>

@property (nonatomic) BOOL setupBackgroundListener;
@property (copy, nonatomic) NSString *continuePlayScheme;
@property (retain, nonatomic) AWESiriIntentsModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onAppDidBecomeActive;
- (void)setupLaunchLogInfoSceneType:(id)a0 url:(id)a1;
- (id)generateJumpScheme:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handlePlayMedia:(id)a0 completion:(id /* block */)a1;
- (void)confirmPlayMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForPlayMedia:(id)a0 withCompletion:(id /* block */)a1;

@end
