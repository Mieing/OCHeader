@class NSDictionary, NSString;

@interface PTYModelInstance : NSObject

@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) NSDictionary *labels;
@property (readonly, nonatomic) NSDictionary *predicts;
@property (readonly, nonatomic) NSString *instancId;

- (void)upload:(float)a0 biz:(id)a1 version:(int)a2 tag:(id)a3;
- (void)upload:(float)a0 biz:(id)a1 version:(int)a2;
- (void)upload:(float)a0 biz:(id)a1;
- (void)addLabel:(id)a0 value:(float)a1;
- (void)addPredict:(id)a0 value:(float)a1;
- (void).cxx_destruct;
- (id)initWithInstance:(struct shared_ptr<pitaya::ModelInstance> { struct ModelInstance *x0; struct __shared_weak_count *x1; })a0;

@end
