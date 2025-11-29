@class NSOperationQueue, NSString, ASSStorageModel;

@interface ASSSecurityManager : NSObject

@property (retain, nonatomic) NSOperationQueue *asyncTaskQueue;
@property (retain) ASSStorageModel *modelCache;
@property (retain, nonatomic) NSString *prevApdid;
@property (retain, nonatomic) NSString *randomIC4;
@property (retain, nonatomic) NSString *lastLoginTime;

+ (id)sharedInstance;

- (void)initializeSecuritySDKTask:(id)a0;
- (id)getTokenResult;
- (void)updateApdidAndToken:(id)a0;
- (id)getUtdid;
- (id)getApdidToken:(id)a0;
- (BOOL)verifyNetworkResult:(id)a0;
- (BOOL)checkIfTodayFirst;
- (BOOL)checkDate;
- (id)getApdidResult:(id)a0;
- (void)saveTrustData:(id)a0;
- (id)loadTrustData;
- (void)init:(int)a0 parameters:(id)a1 callback:(id /* block */)a2;
- (void)init:(int)a0 utdid:(id)a1 tid:(id)a2 callback:(id /* block */)a3;
- (id)getTid;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;

@end
