@class NSString, NSDictionary, NSDate, NSMutableArray;

@interface AWEPzRecordCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
    long long _state;
}

@property (class, readonly, copy, nonatomic) NSDictionary *shared;

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *journalRows;
@property (retain, nonatomic) NSMutableArray *cTagRows;
@property (retain, nonatomic) NSMutableArray *sTagRows;
@property (copy, nonatomic) NSDate *earliestJournalDate;
@property (nonatomic) long long maxRecordCountOnLoad;
@property (nonatomic) int clearOnMemoryLevel;
@property (nonatomic) BOOL isFullData;
@property (readonly, nonatomic) long long s_state;
@property (readonly, copy, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) long long journalCount;

+ (id)sharedForDomain:(id)a0;

- (void)setupWithConfig:(id)a0;
- (void)loadWithModel:(id)a0;
- (id)queryJournalRecordWithModel:(id)a0;
- (id)initWithDomain:(id)a0 config:(id)a1;
- (id)p_realQueryJournalRecordWithModel:(id)a0;
- (void)updateCacheWithModel:(id)a0;
- (void)p_updateCacheWithModel:(id)a0;
- (id)p_journalRowConditionFromScopes:(id)a0 error:(id *)a1;
- (id)p_identifierWithCTags:(id)a0 sTags:(id)a1;
- (void)logShowWithModel:(id)a0;
- (void)logConsumeWithModel:(id)a0;
- (void)logHideWithModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
