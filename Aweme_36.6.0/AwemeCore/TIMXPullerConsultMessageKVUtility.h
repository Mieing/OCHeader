@class NSString, NSNumber, TIMXSDKInstance;
@protocol TIMXKVStorageProtocol, TIMXCurrentUserCredentialProtocol;

@interface TIMXPullerConsultMessageKVUtility : NSObject <TIMXPullerConsultMessageKVUtilityProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSString *kvVersionKey;
@property (retain, nonatomic) NSNumber *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)versionKeyWithType:(long long)a0;

- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)setUpKV;
- (void)migrateVersionForSec;
- (void)writeVersion:(id)a0 save:(BOOL)a1;
- (void).cxx_destruct;
- (id)readVersion;

@end
