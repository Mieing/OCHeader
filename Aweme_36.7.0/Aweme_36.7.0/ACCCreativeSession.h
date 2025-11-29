@class NSString, NSArray, NSHashTable;

@interface ACCCreativeSession : NSObject

@property (retain, nonatomic) id tarotFlowManagerHolder;
@property (readonly, nonatomic) NSHashTable *holdersTable;
@property (readonly, copy, nonatomic) NSString *createId;
@property (readonly, copy, nonatomic) NSArray *holders;

- (void)addHolder:(id)a0;
- (id)initWithCreateId:(id)a0;
- (void).cxx_destruct;

@end
