@class BDDataBuilderDictOperator;

@interface BDDataBuilderDictNode : BDDataBuilderBaseNode

@property (retain, nonatomic) BDDataBuilderDictOperator *dictOperator;
@property (readonly, copy, nonatomic) id /* block */ navTo;
@property (readonly, copy, nonatomic) id /* block */ getValue;
@property (readonly, copy, nonatomic) id /* block */ isExistKey;
@property (readonly, copy, nonatomic) id /* block */ setKV;
@property (readonly, copy, nonatomic) id /* block */ mergeDict;
@property (readonly, copy, nonatomic) id /* block */ mergeJsonObjStr;
@property (readonly, copy, nonatomic) id /* block */ removeKey;

- (BOOL)executeOperationWithInfo:(id)a0 isForward:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
