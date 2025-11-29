@class IESLiveWalletNormalItem;

@interface IESLiveWalletNormalSectionController : IGListSectionController

@property (retain, nonatomic) IESLiveWalletNormalItem *currentItem;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)p_shouldHandleItem:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
