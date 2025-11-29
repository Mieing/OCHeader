@class UIView;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECDetailMediaPreviewRequest : IESECMediaPreviewRequest

@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) BOOL needDetailImagePreviewDelegateBehavior;
@property (weak, nonatomic) UIView *dismissAnimationTargetView;

@end
