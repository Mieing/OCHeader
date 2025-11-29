@protocol IESGCPUserService;

@interface AWEGCPAIGameDetailEngine : NSObject

@property (retain, nonatomic) id<IESGCPUserService> userService;

+ (id)sharedInstance;

- (void)registerPitayaAppLogRunEvent;
- (id)packageTaskParamsWithUserProfile:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2;
- (void)runPitayaTaskWithParams:(id)a0 isPassiveTrigger:(BOOL)a1 callback:(id /* block */)a2;
- (BOOL)inferenceSuccessWithOutput:(id)a0;
- (void)startPredictingWithGameID:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 isPassiveTrigger:(BOOL)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;

@end
