@class NSData;

@interface InferenceHelper : NSObject

@property (nonatomic) double initCost;
@property (retain, nonatomic) NSData *blur_data;
@property (retain, nonatomic) NSData *dark_data;
@property (retain, nonatomic) NSData *ori_data;
@property (retain, nonatomic) NSData *scene_data;
@property (retain, nonatomic) NSData *questions_data;

+ (id)version;

- (struct Inference { void *x0; void *x1; void *x2; void *x3; void *x4; } *)getInference;
- (id)postProcess:(id)a0;
- (struct RejectionState { int x0; int x1; int x2; long long x3; int x4; int x5; } *)getStateMachine;
- (struct Params { double x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })inferenceDefaultParams;
- (id)init:(int)a0 device:(int)a1 params:(id)a2;
- (id)predictImage:(id)a0 params:(struct Params { double x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a1 model_params:(id)a2;
- (void).cxx_destruct;
- (id)version;
- (void)dealloc;

@end
