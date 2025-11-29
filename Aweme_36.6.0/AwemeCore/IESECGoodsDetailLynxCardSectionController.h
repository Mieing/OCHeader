@class NSString;

@interface IESECGoodsDetailLynxCardSectionController : IESECGoodsDetailBaseSectionController

@property (copy, nonatomic) NSString *uniqueId;

- (id)cellForItemAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
