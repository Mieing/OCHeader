@class NSString, NSArray;

@interface AWEIMRefreshImageView : UIImageView

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSArray *requestImageUrlArray;

- (void)aweimRefreshImage_setImageWithURLArray:(id)a0 URI:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
- (void)aweimRefreshImage_setImageWithURLString:(id)a0 placeholder:(id)a1 completion:(id /* block */)a2;
- (void)aweimRefreshImage_setImageWithURLArray:(id)a0 URI:(id)a1 placeholder:(id)a2 cacheName:(id)a3 transformObject:(id)a4 completion:(id /* block */)a5;
- (BOOL)__needRefreshURLForError:(id)a0;
- (void)__aweimRefreshImage_setImageWithURLArray:(id)a0 URI:(id)a1 forceRefresh:(BOOL)a2 placeholder:(id)a3 cacheName:(id)a4 transformObject:(id)a5 completion:(id /* block */)a6;
- (id)__refreshStoreKeyForString:(id)a0;
- (void)__aweimRefreshImage_setImageWithURLString:(id)a0 forceRefresh:(BOOL)a1 placeholder:(id)a2 completion:(id /* block */)a3;
- (void)aweimRefreshImage_setImageWithURLArray:(id)a0 URI:(id)a1 placeholder:(id)a2 cacheName:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
