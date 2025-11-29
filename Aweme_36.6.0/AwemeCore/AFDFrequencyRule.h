@class NSString, AWEStorage;

@interface AFDFrequencyRule : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL uidSpecific;
@property (retain, nonatomic) AWEStorage *storage;

+ (id)frequencyStorage;
+ (id)p_globalRules;
+ (id)p_globalRuleInitializers;
+ (id)globalRuleWithID:(id)a0;
+ (void)setGlobalRule:(id)a0 forID:(id)a1;
+ (void)registerLazyGlobalRuleWithID:(id)a0 initializer:(id /* block */)a1;
+ (id)allGlobalRuleIDs;
+ (void)initialize;

- (id)storageKeyWithPrefix:(id)a0;
- (void)logAction:(id)a0 resultFormat:(id)a1;
- (void)logAvailable:(BOOL)a0 reasonFormat:(id)a1;
- (BOOL)available;
- (void).cxx_destruct;
- (id)initWithID:(id)a0;
- (id)init;
- (void)reset;

@end
