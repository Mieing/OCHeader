@class AWETeenGeneralAuthorListCardModel;

@interface AWETeenGeneralAuthorListSectionController : AWETeenGeneralBaseSectionController

@property (retain, nonatomic) AWETeenGeneralAuthorListCardModel *listModel;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)playEnable;
- (void)cellShow:(id)a0 atIndex:(long long)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
