@class NSDictionary, NSMutableDictionary;

@interface AWEContentEvalFactorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *factorParsers;
@property (copy, nonatomic) NSDictionary *factors;

+ (id)shareInstance;

- (void)registerFactorParsers;
- (void)registerParserWithName:(id)a0 block:(id /* block */)a1;
- (id)calculateValueOfFactor:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
