@class NSString, MMKV, BDXThreadSafeArray;

@interface AWEMRRecordCache : NSObject

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) BDXThreadSafeArray *componentRecordList;
@property (retain, nonatomic) BDXThreadSafeArray *journalRecordList;

- (BOOL)recordConsumeWithToken:(id)a0;
- (void)asyncPurgeJournalIfNeeded;
- (void)storeAllRecordList;
- (void)storeJournalRecordList;
- (void)storeComponentRecordList;
- (id)recordShowWithComponentConfig:(id)a0;
- (BOOL)recordHideWithToken:(id)a0;
- (id)descriptionOfComponentRecordList;
- (id)descriptionOfJournalRecordList;
- (void)clearAllRecord;
- (id)queryJournalWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (void)setup;

@end
