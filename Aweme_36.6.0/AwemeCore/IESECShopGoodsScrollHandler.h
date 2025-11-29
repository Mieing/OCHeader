@class NSString, IESECShopGoodsState, IESECStoreScrollToTopView, IESECShopContext;

@interface IESECShopGoodsScrollHandler : NSObject <IESECShopGoodsStateAttachable, UIScrollViewDelegate> {
    struct CGPoint { double x; double y; } _lastContentOffset;
}

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (copy, nonatomic) NSString *perfScene;
@property (retain, nonatomic) IESECStoreScrollToTopView *scrollToTopView;
@property (copy, nonatomic) id /* block */ scrollCallback;
@property (copy, nonatomic) id /* block */ scrollWillBeginDragging;
@property (copy, nonatomic) id /* block */ scrollDidEndDeceleratingCallback;
@property (copy, nonatomic) id /* block */ scrollDidEndDraggingCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachState:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
