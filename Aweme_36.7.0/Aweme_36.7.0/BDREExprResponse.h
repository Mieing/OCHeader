@class NSString, NSError;

@interface BDREExprResponse : NSObject

@property (retain, nonatomic) id result;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double envCost;
@property (nonatomic) double execCost;
@property (nonatomic) BOOL parseHitCache;
@property (nonatomic) BOOL ilHitCache;

- (id)jsonFormat;
- (id)initWithError:(id)a0 ilHitCache:(BOOL)a1 parseHitCache:(BOOL)a2 startTime:(double)a3 envCost:(double)a4;
- (id)initWithError:(id)a0 startTime:(double)a1 envCost:(double)a2;
- (void).cxx_destruct;

@end
