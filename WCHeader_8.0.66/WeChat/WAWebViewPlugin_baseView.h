@class NSString, NSMutableArray;

@interface WAWebViewPlugin_baseView : WAWebViewPlugin_embedView <WABaseViewDelegate, UIScrollViewDelegate, WATouchBaseViewDelegate> {
    BOOL _isReady;
    NSMutableArray *_animates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recoverImageScrollView:(id)a0;
+ (void)refreshImageScrollView:(id)a0 minimumZoomScale:(double)a1 zoomScale:(double)a2;
+ (id)imageWithData:(id)a0;

- (unsigned int)insertBaseView:(id)a0;
- (void)updateBaseView:(id)a0;
- (void)removeBaseView:(unsigned int)a0;
- (void)onButtonClick:(id)a0;
- (unsigned int)insertScrollView:(id)a0;
- (void)updateScrollView:(id)a0;
- (void)removeScrollView:(unsigned int)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)onTouchBegin:(id)a0 canvas:(id)a1;
- (void)onTouchMove:(id)a0 canvas:(id)a1;
- (void)onTouchEnd:(id)a0 canvas:(id)a1;
- (void)onTouchCancel:(id)a0 canvas:(id)a1;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)animateCoverView:(id)a0 param:(id)a1 block:(id /* block */)a2;
- (unsigned int)insertScrollImageViewWithParams:(id)a0;
- (void)updateScrollImageViewWithParams:(id)a0;
- (void)removeScrollImageViewWithViewId:(unsigned int)a0;
- (void)loadImageScrollView:(id)a0 imageURL:(id)a1 viewId:(unsigned int)a2 zoomScale:(double)a3 minimumZoomScale:(double)a4;
- (void).cxx_destruct;

@end
