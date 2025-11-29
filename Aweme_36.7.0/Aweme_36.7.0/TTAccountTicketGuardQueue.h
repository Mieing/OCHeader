@class NSMutableArray, NSMutableDictionary;

@interface TTAccountTicketGuardQueue : TTAccountCommonModel

@property (nonatomic) unsigned long long maxCapacity;
@property (retain, nonatomic) NSMutableArray *queueKeys;
@property (retain, nonatomic) NSMutableDictionary *queueValues;

- (id)queueContents;
- (void)enqueueWithKey:(id)a0 value:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (unsigned long long)queueSize;

@end
