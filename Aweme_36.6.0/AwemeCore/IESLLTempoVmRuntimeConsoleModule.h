@class NSString, NSDictionary, IESLLTempoContext, IESLLTempoContextStore;

@interface IESLLTempoVmRuntimeConsoleModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) IESLLTempoContext *tempoContext;
@property (weak, nonatomic) IESLLTempoContextStore *tempoContextStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void).cxx_destruct;
- (long long)time;
- (void)log:(id)a0;
- (void)dealloc;
- (void)error:(id)a0;
- (void)info:(id)a0;
- (void)warn:(id)a0;

@end
