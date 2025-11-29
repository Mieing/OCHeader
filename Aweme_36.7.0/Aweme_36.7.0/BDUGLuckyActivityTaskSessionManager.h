@class NSString, NSMutableDictionary;

@interface BDUGLuckyActivityTaskSessionManager : NSObject <BDUGLuckyActivitySessionInternalProtocol>

@property (retain, nonatomic) NSMutableDictionary *sessionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (id)createSessionWithGlobalTaskId:(id)a0;
- (void)removeSessionForGlobalTaskId:(id)a0;
- (id)updateSessionIndexForGlobalTaskId:(id)a0;
- (id)updateSessionAssociateInfoForGlobalTaskId:(id)a0 canAssociateBusinessEvent:(BOOL)a1;
- (id)getSessionInfoWithGlobalTaskId:(id)a0;
- (id)buildTrackerSessionInfoWithGlobalTaskId:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
