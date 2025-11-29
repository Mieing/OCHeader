@class NSArray;

@interface DVEMultipleTrackUpdateTask : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ forwardBlk;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *completions;

- (void)executeCompletions;
- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 action:(id /* block */)a1;

@end
