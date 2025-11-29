@class NSString, UIView, IESLiveDynamicGiftModel, UIViewController;
@protocol IESHYContainerProtocol, IESLiveURLSchemaHandler, IESLiveGiftLynxPlayerDelegate, IESLiveInternalRouter;

@interface IESLiveGiftLynxPlayer : NSObject <IESHYHybridViewLifecycleProtocol>

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) IESLiveDynamicGiftModel *model;
@property (retain, nonatomic) UIViewController *playerViewController;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (weak, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (weak, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (weak, nonatomic) id<IESLiveGiftLynxPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)didFinishPlayingWithError:(long long)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)createHybridContainer:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didFinishPlayingWithError:(long long)a0 withError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)play:(id)a0;

@end
