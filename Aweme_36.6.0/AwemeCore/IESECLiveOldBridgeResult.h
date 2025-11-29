@interface IESECLiveOldBridgeResult : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (id)initWithData:(id)a0 code:(long long)a1;
- (void).cxx_destruct;

@end
