@interface IESLiveNativeAppMemoryStatusModel : IESLiveDynamicModel

@property (nonatomic) long long shelfStatus;
@property (nonatomic) long long cardStatus;
@property (nonatomic) long long tradeDataStatus;
@property (nonatomic) long long importantCardStatus;

- (id)init;

@end
