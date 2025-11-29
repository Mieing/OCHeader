@class NSMutableDictionary;

@interface CSJUserMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *userActionDictM;

- (void)click:(id)a0;
- (void)resetWithSlotID:(id)a0 meta:(id)a1;
- (void)skipClick:(id)a0;
- (id)dictionaryValue:(id)a0;
- (void).cxx_destruct;

@end
