@class TempoMethod, NSString;

@interface TempoBindedMethod : NSObject <TempoMethod>

@property (retain, nonatomic) id receiver;
@property (retain, nonatomic) TempoMethod *method;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReceiver:(id)a0 method:(id)a1;
- (id)invokeWithArgs:(id)a0 context:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
