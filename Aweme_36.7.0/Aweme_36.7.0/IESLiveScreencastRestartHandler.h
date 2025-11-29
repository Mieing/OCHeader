@class NSString;
@protocol IESLiveScreencastLiveDestroyService, IESLiveScreencastRestartHandlerActionDelegate, IESLiveRoomService, IESLiveScreencastLiveInitService;

@interface IESLiveScreencastRestartHandler : NSObject <IESLiveScreencastLiveModuleRestartRouter>

@property (nonatomic) unsigned long long restartStatus;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveScreencastLiveInitService> initializeService;
@property (retain, nonatomic) id<IESLiveScreencastLiveDestroyService> destroyService;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (weak, nonatomic) id<IESLiveScreencastRestartHandlerActionDelegate> actionDelegate;
@property (nonatomic) BOOL isRestarting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)screenCapturedDidChange:(id)a0;
- (void)restartLiveWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)p_setupRoom:(id)a0;
- (void)p_screencastLiveDestroy;
- (void)p_checkScreencastRestartReadyFinish;
- (void)observeScreenCapturedStatus;
- (void)p_screencastRestartWithResult:(BOOL)a0;
- (void)p_screencastLiveInit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObservers;
- (id)initWithRoom:(id)a0;
- (void)p_addObservers;

@end
