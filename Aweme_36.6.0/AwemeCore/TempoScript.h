@class NSString;

@interface TempoScript : NSObject

@property (nonatomic) struct ASTree { void /* function */ **x0; long long x1; long long x2; } *parsedTree;
@property (readonly, copy, nonatomic) NSString *source;

+ (id)createWithSource:(id)a0 error:(id *)a1;
+ (id)execute:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)execute:(id)a0 context:(id)a1;

- (id)initWithSource:(id)a0;
- (void)parse;
- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
