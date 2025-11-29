@class IESECShopScrollableTagListView, NSString, IESECShopTagListModel;
@protocol IESECShopSLICardEventDelegate;

@interface IESECShopSLIScrollTagListElementView : IESECSliceXBaseContentElementView <IESECShopScrollableTagListDelegate, IESECShopSLIScrollTagListElementView, IESECSliceXFlexObserver> {
    struct CGSize { double width; double height; } _viewSize;
    double _fontScaleRatio;
    BOOL _hasReLayoutSubviews;
}

@property (weak, nonatomic) id<IESECShopSLICardEventDelegate> eventDelegate;
@property (nonatomic) double colorAnimationPercent;
@property (retain, nonatomic) IESECShopTagListModel *tagList;
@property (retain, nonatomic) IESECShopScrollableTagListView *tagListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollableTagListViewDidShow:(id)a0;
- (void)scrollableTagListViewDidClick:(id)a0;
- (void)scrollableTagListView:(id)a0 tagDidShow:(id)a1;
- (void)scrollableTagListView:(id)a0 tagDidClick:(id)a1;
- (void)scrollableTagListViewDidEndDragging:(id)a0;
- (id)scrollableTagListViewClickExtraParams:(id)a0;
- (void)startScroll;
- (void)endScroll;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)flexDidLayout:(id)a0;
- (void)pauseScroll;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
