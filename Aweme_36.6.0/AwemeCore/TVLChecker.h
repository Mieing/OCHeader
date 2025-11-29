@protocol TVLCheckerDelegate;

@interface TVLChecker : NSObject

@property (weak, nonatomic) id<TVLCheckerDelegate> delegate;
@property (nonatomic) BOOL enableReduceReport;

+ (id)checkerWithConfiguration:(id)a0;

- (void)hasDetectedEventWithKey:(id)a0 eventInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
