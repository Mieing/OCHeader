@class NSString, NSDictionary, IESLLTempoUIView, IESLLTempoContextStore, IESLLTempoContext;

@interface IESLLTempoVmRuntimeTempoModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) IESLLTempoUIView *tempoView;
@property (weak, nonatomic) IESLLTempoContextStore *tempoContextStore;
@property (weak, nonatomic) IESLLTempoContext *tempoContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)updateData:(id)a0 updateCallback:(id /* block */)a1;
- (void)setDataWithComponentID:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)invokeUI:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
