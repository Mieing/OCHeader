@class NSSet, NSMutableDictionary;

@interface IESECPerfSessionManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *sessionMap;
@property (copy, nonatomic) NSSet *backgroundSessionSet;

+ (id)sharedInstance;

- (void)writeSessionStage:(id)a0 stageType:(id)a1 timestamp:(double)a2 extraData:(id)a3 targetSession:(id)a4;
- (id)readSessionData:(id)a0 stage:(id)a1;
- (id)p_createSessionID;
- (void)writeSessionStage:(id)a0 timestamp:(double)a1 extraData:(id)a2 targetSession:(id)a3;
- (id)readSessionData:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)createSession;

@end
