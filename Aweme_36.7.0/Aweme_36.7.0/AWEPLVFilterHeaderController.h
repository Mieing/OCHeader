@class NSDictionary;

@interface AWEPLVFilterHeaderController : AWEPadListReusableViewBaseController

@property (retain, nonatomic) NSDictionary *filterMap;

- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void)configFilterBarSelectStatus:(id)a0;
- (id)filterMapOriginalDic;
- (void)filterDidSelectWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (Class)viewClass;

@end
