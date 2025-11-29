@class IESECOrderListRefreshTrailer, NSString;

@interface IESECSliceXOrderListOftenBuyShopView : IESECSliceXListElementView <UICollectionViewDelegate>

@property (retain, nonatomic) IESECOrderListRefreshTrailer *trailer;
@property (nonatomic) BOOL hasShownTrackerOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
