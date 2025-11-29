@class NSString, NSMutableDictionary, NSArray;

@interface ACCRepoChallengeBindModel : NSObject <AWERepositoryDraftProtocol, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL didHandleChallengeBind;
@property (copy, nonatomic) NSString *challengeIDsFromSchema;
@property (nonatomic) BOOL banAutoAddHashStickers;
@property (retain, nonatomic) NSMutableDictionary *preloadChallenge;
@property (copy, nonatomic) NSArray *currentBindChallengeInfos;
@property (copy, nonatomic) NSArray *needRemoveWhenReRecordChallenges;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)currentBindChallengeNames;
- (id)currentBindChallengeIds;
- (void)markNeedRemoveWhenReRecord;
- (id)preloadChallengeNames;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
