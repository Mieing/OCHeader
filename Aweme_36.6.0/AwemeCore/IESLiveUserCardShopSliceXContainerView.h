@class IESLiveUserCardStore, IESLiveDslTemplate;
@protocol IESLiveSliceXInstanceInterface;

@interface IESLiveUserCardShopSliceXContainerView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveDslTemplate *dsl;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;

- (void)doTap;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setup;

@end
