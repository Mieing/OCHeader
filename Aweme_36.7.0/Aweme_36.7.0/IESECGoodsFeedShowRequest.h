@class NSString;

@interface IESECGoodsFeedShowRequest : IESECGoodsDetailShowRequest

@property (nonatomic) BOOL needOneStepOrder;
@property (copy, nonatomic) id /* block */ oneStepOrderCompletion;
@property (retain, nonatomic) NSString *feedSessionId;
@property (nonatomic) BOOL enableImmersive;

- (void).cxx_destruct;
- (id)init;

@end
