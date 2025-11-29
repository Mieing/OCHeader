@class NSString;

@interface IESLLTempoExprCoreFunc : NSObject

@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) unsigned long long minArgsCount;
@property (readonly, nonatomic) unsigned long long maxArgsCount;
@property (readonly, nonatomic) BOOL needGlobalEnv;

- (id)execute:(id)a0 withGlobalEnv:(id)a1 error:(id *)a2;
- (id)execute:(id)a0 error:(id *)a1;

@end
