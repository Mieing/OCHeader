@class NSString;

@interface BDUGLuckyDogContainerService : NSObject <BDUGLuckyDogContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)topVCIsTargetPage:(id)a0;
- (void)fireTopVCEvent:(id)a0 params:(id)a1;
- (void)pauseAllTasks;
- (void)resumeFromAllTasksPaused;
- (id)urlOfVC:(id)a0;
- (void)fireEvent:(id)a0 params:(id)a1;

@end
