@class NSString;

@interface WCTimeStepLog : NSObject

@property (nonatomic) double begin;
@property (retain, nonatomic) NSString *prefix;

- (id)initWithPrefix:(id)a0;
- (double)showTimeStep:(id)a0;
- (void).cxx_destruct;

@end
