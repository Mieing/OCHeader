@interface IESECWinTabDataController : NSObject

+ (void)configWithTabResponse:(id)a0 context:(id)a1 tab:(id)a2;
+ (void)requestTabListWithTabList:(id)a0 loadMore:(BOOL)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)reloadTabDataWithContext:(id)a0 tab:(id)a1 completion:(id /* block */)a2;
+ (id)configTabApiWithContext:(id)a0 tabList:(id)a1;
+ (void)setExtensionCardRequestOnAir:(id)a0 withTabType:(unsigned long long)a1 categoryID:(id)a2 context:(id)a3;
+ (void)configWithExtensionCardResponse:(id)a0 withTabType:(unsigned long long)a1 categoryID:(id)a2 context:(id)a3;
+ (void)configWithTabBFFResponse:(id)a0 context:(id)a1 hybridListModel:(id)a2;
+ (void)fetchExtensionCardWithModel:(id)a0 context:(id)a1 tabList:(id)a2;
+ (void)requestOrderStatusWithContext:(id)a0;

@end
