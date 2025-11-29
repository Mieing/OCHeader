@interface IESWebcastFastMatchModel : IESLiveWebcastBaseModel

@property (nonatomic) long long roomId;
@property (nonatomic) long long matchScene;

- (id)parsedKeys;
- (id)initWithParams:(id)a0;

@end
