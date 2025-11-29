@class NSString;

@interface PitayaInferenceEngine : NSObject <IInferenceEngine>

@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) unsigned long long pitayaTaskType;
@property (nonatomic) unsigned long long harTaskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)predictWithParam:(id)a0 engineCallback:(id /* block */)a1;
- (void)deprecated_predictWithParam:(id)a0 engineCallback:(id /* block */)a1;
- (id)initWithTaskName:(id)a0 taskType:(unsigned long long)a1 harTaskType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (id)initWithTaskName:(id)a0;
- (id)initWithTaskType:(unsigned long long)a0;

@end
