@class BDDataBuilderUrlStrOperator;

@interface BDDataBuilderUrlStrNode : BDDataBuilderBaseNode

@property (retain, nonatomic) BDDataBuilderUrlStrOperator *urlStrOperator;
@property (readonly, copy, nonatomic) id /* block */ navToParam;
@property (readonly, copy, nonatomic) id /* block */ setParam;
@property (readonly, copy, nonatomic) id /* block */ getValue;
@property (readonly, copy, nonatomic) id /* block */ getUrlValue;

- (BOOL)executeOperationWithInfo:(id)a0 isForward:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
