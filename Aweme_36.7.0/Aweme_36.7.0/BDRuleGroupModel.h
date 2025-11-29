@class NSArray, NSString;

@interface BDRuleGroupModel : NSObject

@property (retain, nonatomic) NSArray *rawJsonArray;
@property (retain, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *keys;

- (id)initWithJsonArray:(id)a0 name:(id)a1 keys:(id)a2;
- (id)initWithArray:(id)a0 name:(id)a1 keys:(id)a2;
- (id)initWithArray:(id)a0 name:(id)a1;
- (id)initWithJsonArray:(id)a0 name:(id)a1;
- (id)initWithMergeRuleGroupModelArray:(id)a0;
- (void)loadCommandsAndEnableExecutor:(BOOL)a0;
- (id)jsonFormat;
- (void).cxx_destruct;

@end
