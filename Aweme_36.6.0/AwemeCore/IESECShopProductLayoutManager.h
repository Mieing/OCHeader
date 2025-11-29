@class IESECStorePageContext;

@interface IESECShopProductLayoutManager : NSObject

@property (retain, nonatomic) IESECStorePageContext *pageContext;

+ (BOOL)isValidTabStyle:(long long)a0;

- (void)setTabStyle:(long long)a0;
- (id)initWithPageContext:(id)a0;
- (long long)getTabStyle;
- (id)keyV2;
- (id)keyV1;
- (void).cxx_destruct;

@end
