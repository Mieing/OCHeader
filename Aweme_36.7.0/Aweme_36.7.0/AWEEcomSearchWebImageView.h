@interface AWEEcomSearchWebImageView : UIImageView

+ (id)safeURL:(id)a0;

- (void)search_setImageWithURLArray:(id)a0 placeholder:(id)a1 bizTag:(id)a2 sceneTag:(id)a3 completion:(id /* block */)a4;
- (void)search_setImageWithURLArray:(id)a0 placeholder:(id)a1 bizTag:(id)a2 sceneTag:(id)a3 preferredSize:(struct CGSize { double x0; double x1; })a4 options:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)search_setImageWithURL:(id)a0 placeholder:(id)a1 bizTag:(id)a2 sceneTag:(id)a3;
- (void)search_setImageWithURLArray:(id)a0 placeholder:(id)a1 options:(unsigned long long)a2 bizTag:(id)a3 sceneTag:(id)a4 completion:(id /* block */)a5;

@end
