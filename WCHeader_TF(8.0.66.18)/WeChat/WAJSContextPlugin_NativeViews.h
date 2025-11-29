@class NSString;

@interface WAJSContextPlugin_NativeViews : WAJSContextPluginBase <WABaseViewDelegate, WATouchBaseViewDelegate, MoveWithTouchAlgorithmDelegate, UIScrollViewDelegate>

@property (nonatomic) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertBaseView:(id)a0 block:(id /* block */)a1;
- (void)updateBaseView:(id)a0 block:(id /* block */)a1;
- (void)removeBaseView:(id)a0 block:(id /* block */)a1;
- (void)insertScrollView:(id)a0 block:(id /* block */)a1;
- (void)updateScrollView:(id)a0 block:(id /* block */)a1;
- (void)animateCoverViewWithParam:(id)a0 block:(id /* block */)a1;
- (id)rootViewsForDic:(id)a0;
- (id)rootViewsForIndependent;
- (id)rootViewsForDest:(long long)a0;
- (void)onButtonClick:(id)a0;
- (void)onDragBegin:(id)a0 canvas:(id)a1;
- (void)onDragMove:(id)a0 canvas:(id)a1;
- (void)onDragEnd:(id)a0 canvas:(id)a1;
- (void)onDragCancel:(id)a0 canvas:(id)a1;
- (void)sendDragEventForViewForView:(id)a0 touches:(id)a1 stage:(id)a2;
- (void)onTouchBegin:(id)a0 canvas:(id)a1;
- (void)onTouchMove:(id)a0 canvas:(id)a1;
- (void)onTouchEnd:(id)a0 canvas:(id)a1;
- (void)onTouchCancel:(id)a0 canvas:(id)a1;
- (void)sendJSEventWithEventName:(id)a0 param:(id)a1 baseView:(id)a2;
- (void)getFileData:(id)a0 referrerPolicyType:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)getFileData:(id)a0;
- (id)decodeBase64String:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
