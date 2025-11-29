@class FavDataItemWrap, FavoritesItem;

@interface FavProductDetailViewController : ProductDetailViewController {
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
}

- (id)initWithFavoritesItem:(id)a0;
- (id)initWithFavDataWrap:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onDeleteProduct;
- (void)onEditProductTag;
- (void)OnSendAppMsgOKToContacts:(id)a0;
- (void).cxx_destruct;

@end
