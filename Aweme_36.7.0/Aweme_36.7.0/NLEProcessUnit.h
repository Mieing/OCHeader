@interface NLEProcessUnit : NSObject

@property (copy, nonatomic) id /* block */ runBlock;
@property (retain, nonatomic) NLEProcessUnit *next;
@property (copy, nonatomic) id /* block */ nextBlock;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (nonatomic) BOOL consumed;
@property (nonatomic) BOOL isTail;

- (void).cxx_destruct;
- (id)description;
- (void)run;

@end
