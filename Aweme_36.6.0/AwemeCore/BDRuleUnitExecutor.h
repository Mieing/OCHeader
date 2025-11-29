@class NSString, NSArray;
@protocol BDREExprEnv;

@interface BDRuleUnitExecutor : NSObject

@property (copy, nonatomic) NSString *cel;
@property (retain, nonatomic) NSArray *commands;
@property (retain, nonatomic) id<BDREExprEnv> env;
@property (copy, nonatomic) NSString *uuid;

- (id)initWithCel:(id)a0 commands:(id)a1 env:(id)a2 uuid:(id)a3;
- (void).cxx_destruct;
- (BOOL)evaluate:(id *)a0;

@end
