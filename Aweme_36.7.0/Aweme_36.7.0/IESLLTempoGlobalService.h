@class IESLLTempoExprCoreRunner;

@interface IESLLTempoGlobalService : NSObject

@property (retain, nonatomic) IESLLTempoExprCoreRunner *exprRunner;

+ (id)shared;

- (void)loadExprRunner;
- (void).cxx_destruct;
- (id)init;

@end
