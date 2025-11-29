@protocol YataInstanceInterface;

@interface IESECBuyNowScrollEventService : NSObject

@property (weak, nonatomic) id<YataInstanceInterface> yataInstanceObj;

- (void)scrollToViewWithEventData:(id)a0 collectionView:(id)a1;
- (void)scrollToViewWithInstance:(id)a0 collectionView:(id)a1;
- (void).cxx_destruct;

@end
