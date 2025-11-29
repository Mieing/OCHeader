@class NSArray;

@interface BDRuleFreModel : BDRuleModel

@property (retain, nonatomic) NSArray *controlParams;
@property (nonatomic) unsigned long long checkerType;
@property (nonatomic) unsigned long long checkerLimit;
@property (nonatomic) unsigned long long checkerInterval;

- (id)initWithDictionary:(id)a0 key:(id)a1 strategy:(id)a2 source:(id)a3;
- (id)extraCheckCelResult:(BOOL)a0 env:(id)a1;
- (void)postProcessWithResult:(id)a0 context:(id)a1;
- (id)jsonFormat;
- (id)generateFreKeyWithEnv:(id)a0;
- (id)getRecordsWithKey:(id)a0;
- (BOOL)countCheckWithRecords:(id)a0 count:(unsigned long long *)a1;
- (void)storeRecords:(id)a0 withKey:(id)a1;
- (void)appendRecordWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
