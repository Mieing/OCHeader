@class IESECGoodsFeedContext, NSString, UIView;
@protocol IESECGoodsFeedContainerProtocol, IESECGoodsFeedOperationProtocol;

@interface IESECGoodsFeedProductController : NSObject <IESECGoodsFeedControllerProtocol>

@property (weak, nonatomic) IESECGoodsFeedContext *context;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) id<IESECGoodsFeedContainerProtocol> container;
@property (weak, nonatomic) id<IESECGoodsFeedOperationProtocol> goodsFeedListDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completion:(BOOL)a0;
- (void)updateLargeCardData:(id)a0 error:(id)a1;
- (void)initProductCard;
- (void)requestGoodsCard;
- (void)fetchGoodsCardCompletionResponse:(id)a0 error:(id)a1;
- (void)errorResponse:(id)a0 error:(id)a1;
- (void)successResponse:(id)a0 request:(id)a1 error:(id)a2 responseType:(long long)a3;
- (id)handleResponse:(id)a0 request:(id)a1 error:(id)a2 type:(long long)a3;
- (void)updateFirstCardViewModelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)initialized;
- (void).cxx_destruct;

@end
