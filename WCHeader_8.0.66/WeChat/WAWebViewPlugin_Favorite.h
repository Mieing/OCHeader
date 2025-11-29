@class NSDictionary;

@interface WAWebViewPlugin_Favorite : WAWebViewPluginBase

@property (retain, nonatomic) NSDictionary *wmpfCustomParams;

- (void)notifyToAddFavItem:(id)a0;
- (id)genFavoriteData:(id)a0;
- (void)addFavorItemWithFavoriteData:(id)a0 completion:(id /* block */)a1;
- (void)getImageDataFromUrl:(id)a0 completion:(id /* block */)a1;
- (id)snapshotWebView;
- (id)snapshotWebViewNoCrop;
- (void).cxx_destruct;

@end
