@class NSString;
@protocol IESLiveDIContext;

@interface AWELiveXPlayManager : NSObject <IESLiveXPlayOuterService>

@property (weak, nonatomic) id<IESLiveDIContext> diContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelLoadItemIfNeeded;
- (void)preloadSceneWithConfig:(id)a0;
- (void)upateDIContext:(id)a0;
- (void)loadPlayInstanceWithModel:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
