@class NSArray, NSString;

@interface TempoExpression : NSObject

@property (nonatomic) BOOL isStatic;
@property (retain, nonatomic) NSArray *subTokenList;
@property (readonly, copy, nonatomic) NSString *statement;

+ (id)createWithStatement:(id)a0 error:(id *)a1;
+ (id)execute:(id)a0 context:(id)a1 error:(id *)a2;

- (id)parseSubTokens:(id *)a0;
- (id)initWithStatement:(id)a0;
- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;

@end
