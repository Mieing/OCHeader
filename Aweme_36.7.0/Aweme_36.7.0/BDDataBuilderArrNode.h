@class BDDataBuilderArrOperator;

@interface BDDataBuilderArrNode : BDDataBuilderBaseNode

@property (retain, nonatomic) BDDataBuilderArrOperator *arrOperator;
@property (readonly, copy, nonatomic) id /* block */ navToIndex;
@property (readonly, copy, nonatomic) id /* block */ getValue;
@property (readonly, copy, nonatomic) id /* block */ appendItem;
@property (readonly, copy, nonatomic) id /* block */ insertItem;
@property (readonly, copy, nonatomic) id /* block */ removeAtIndex;

- (BOOL)executeOperationWithInfo:(id)a0 isForward:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
