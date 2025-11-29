@class NSString, TIMXSDKInstance;
@protocol TIMXKVStorageProtocol, TIMXCurrentUserCredentialProtocol;

@interface TIMXPullerThreadMessageKVUtility : NSObject <TIMXPullerThreadMessageKVUtilityProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSString *kvVersionKey;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)setUpKV;
- (BOOL)isVersionValid;
- (void)writeVersion:(long long)a0 save:(BOOL)a1;
- (void).cxx_destruct;
- (long long)readVersion;

@end
