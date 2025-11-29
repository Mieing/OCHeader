@interface IESECLiveLogResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
