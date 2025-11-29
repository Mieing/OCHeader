@class NSString, TIMXSDKInstance;
@protocol TIMXPullerCommandMessageKVUtilityDelegate, TIMXKVStorageProtocol, TIMXCurrentUserCredentialProtocol;

@interface TIMXPullerCommandMessageKVUtility : NSObject <TIMXPullerCommandMessageKVUtilityProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSString *kvIndexKey;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *kvIndexV2Key;
@property (nonatomic) long long indexV2;
@property (copy, nonatomic) NSString *kvIndexV2BackupKey;
@property (weak, nonatomic) id<TIMXPullerCommandMessageKVUtilityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexKeyForInbox:(int)a0 type:(long long)a1;
+ (id)indexV2ForInbox:(int)a0;
+ (id)indexV2BackupForInbox:(int)a0;
+ (id)indexKeyForInbox:(int)a0;

- (long long)readIndex;
- (long long)readIndexV2;
- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)setUpKV;
- (BOOL)isIndexValid;
- (void)writeIndex:(long long)a0 save:(BOOL)a1 withContext:(id)a2;
- (void)writeIndex:(long long)a0 save:(BOOL)a1;
- (void)writeIndexV2:(long long)a0 save:(BOOL)a1;
- (void)writeIndexV2BackupIndex:(long long)a0 save:(BOOL)a1;
- (BOOL)hasIndexWithType:(long long)a0;
- (void)migrateOldIndex;
- (void)migrateIndexForSec;
- (long long)readIndexV2BackupIndex;
- (void).cxx_destruct;

@end
