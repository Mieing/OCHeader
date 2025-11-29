@class FavoritesItem;

@interface FavTVViewController : ShakeTvViewController {
    FavoritesItem *m_favItem;
}

- (id)initWithFavoritesItem:(id)a0;
- (id)initWithFavData:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)onDeleteTV;
- (void)onEditTVTag;
- (void).cxx_destruct;

@end
