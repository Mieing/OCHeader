@class NSArray, DTRpcMethodMXXT, NSMutableDictionary;

@interface DTRpcOperationMXXT : DTRpcBaseOperationMXXT

@property (retain, nonatomic) DTRpcMethodMXXT *method;
@property (retain, nonatomic) NSArray *params;
@property (retain, nonatomic) id resultObject;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (nonatomic) double startTime;

- (id)initWithURL:(id)a0 method:(id)a1 params:(id)a2 timeout:(double)a3;
- (id)initWithURL:(id)a0 method:(id)a1 params:(id)a2;
- (id)initWithURL:(id)a0 method:(id)a1 params:(id)a2 headerFields:(id)a3;
- (id)buildRequestDataWithMethod:(id)a0 params:(id)a1;
- (id)copy;
- (void).cxx_destruct;
- (void)start;
- (void)didFinish;
- (void)didStart;

@end
