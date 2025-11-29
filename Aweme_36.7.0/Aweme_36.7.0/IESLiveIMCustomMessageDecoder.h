@interface IESLiveIMCustomMessageDecoder : IESLiveIMPayloadDecoder

@property (nonatomic) unsigned long long type;

- (void)logEvent:(id)a0 params:(id)a1;
- (void)decode:(id)a0 completion:(id /* block */)a1;
- (id)transformValue:(id)a0 withExtra:(id)a1 errorType:(id *)a2;
- (id)init;

@end
