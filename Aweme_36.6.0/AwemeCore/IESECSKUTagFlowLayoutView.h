@class NSString, IESECSkuMarqueeView;

@interface IESECSKUTagFlowLayoutView : IESECSliceXViewElementView <IESECSliceXFlexObserver>

@property (nonatomic) BOOL isInMarquee;
@property (nonatomic) BOOL hasReLayoutSubviews;
@property (weak, nonatomic) IESECSkuMarqueeView *superMarqueeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
