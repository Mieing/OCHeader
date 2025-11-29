@class NSObject;

@interface FaceGuardDevice : AppendAction

@property (retain) NSObject *deviceLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getDeviceToken;
- (void)reportUserData:(int)a0 :(id)a1;
- (void)reportMoment;
- (void)initFG:(id)a0 :(id /* block */)a1;
- (void)initFGIPV6:(id)a0 :(id /* block */)a1;
- (void)initFG:(id)a0 withOptions:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)getVersion;
- (id)getSessionId;
- (id)getSession;

@end
