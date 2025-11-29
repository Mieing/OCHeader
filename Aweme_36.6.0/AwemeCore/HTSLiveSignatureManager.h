@class NSLock, NSMutableDictionary, NSMutableArray;

@interface HTSLiveSignatureManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long limit;
@property (retain, nonatomic) NSMutableDictionary *roomSignatureByRoomId;
@property (retain, nonatomic) NSMutableArray *roomSignatureRoomIds;
@property (nonatomic) BOOL enableRoomSignature;

+ (id)sharedSignatureManager;

- (id)roomSignatureWithRoomId:(id)a0;
- (void)saveSignatureWithRoomid:(id)a0 signature:(id)a1;
- (id)appendSignatureWithParameters:(id)a0;
- (void)onRoomEnter:(id)a0 signature:(id)a1;
- (void)onLogIn:(id)a0;
- (void)onLogOut;
- (void).cxx_destruct;
- (id)init;
- (void)clearSignature;

@end
