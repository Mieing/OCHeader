@interface IESECObservable : IESECEventPublisher

@property (retain, nonatomic) id value;

- (void)silentlyUpdateValueToValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
