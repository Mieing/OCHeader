@class BDDataBuilderAnyOperator;

@interface BDDataBuilderAnyNode : BDDataBuilderBaseNode

@property (retain, nonatomic) BDDataBuilderAnyOperator *anyOperator;
@property (readonly, copy, nonatomic) id /* block */ getValue;
@property (readonly, copy, nonatomic) id /* block */ getBoolValue;
@property (readonly, copy, nonatomic) id /* block */ getIntValue;
@property (readonly, copy, nonatomic) id /* block */ getFloatValue;
@property (readonly, copy, nonatomic) id /* block */ getNumberValue;
@property (readonly, copy, nonatomic) id /* block */ getStrValue;
@property (readonly, copy, nonatomic) id /* block */ getArrValue;
@property (readonly, copy, nonatomic) id /* block */ getDictValue;
@property (readonly, copy, nonatomic) id /* block */ setValue;
@property (readonly, copy, nonatomic) id /* block */ asUrlStr;
@property (readonly, copy, nonatomic) id /* block */ asArr;
@property (readonly, copy, nonatomic) id /* block */ asDict;
@property (readonly, copy, nonatomic) id /* block */ asJsonArrStr;
@property (readonly, copy, nonatomic) id /* block */ asJsonObjStr;

- (BOOL)executeOperationWithInfo:(id)a0 isForward:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
