@class NSString;

@interface SECDecisionResult : NSObject

@property (nonatomic) BOOL isPassed;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *reason;

- (id)initWithResult:(BOOL)a0 action:(unsigned long long)a1 reason:(id)a2;
- (id)initWithResult:(BOOL)a0 action:(unsigned long long)a1;
- (void).cxx_destruct;

@end
