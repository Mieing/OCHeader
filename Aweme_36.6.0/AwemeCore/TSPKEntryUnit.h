@class NSString, TSPKEntryUnitModel;

@interface TSPKEntryUnit : NSObject

@property (nonatomic) BOOL entryInit;
@property (nonatomic) BOOL entryEnable;
@property (retain, nonatomic) TSPKEntryUnitModel *model;
@property (copy, nonatomic) NSString *entryType;

- (id)handleAccessEntry:(id)a0;
- (id)storeIdentifierForModel:(id)a0;
- (id)parseBPEAContext;
- (id)createEventDataWithModel:(id)a0;
- (id)broadcastWithEventType:(unsigned long long)a0 event:(id)a1;
- (void)saveAccessEntry:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)a0;

@end
