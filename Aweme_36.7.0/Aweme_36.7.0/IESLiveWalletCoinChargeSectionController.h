@class IESLiveWalletMyCoinItem, NSDictionary;

@interface IESLiveWalletCoinChargeSectionController : IGListSectionController

@property (retain, nonatomic) IESLiveWalletMyCoinItem *coinItem;
@property (copy, nonatomic) NSDictionary *trackInfo;

- (id)cellForItemAtIndex:(long long)a0;
- (id)initWithTrackInfo:(id)a0;
- (void)didUpdateToObject:(id)a0;
- (void)updateSessionID;
- (void)trackViewAppear;
- (void)trackViewBeginShow;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
