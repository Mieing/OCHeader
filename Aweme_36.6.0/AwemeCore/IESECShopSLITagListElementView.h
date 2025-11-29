@class NSString, IESECShopTagListModel, NSMutableSet, IESECShopTagListView;
@protocol IESECShopSLICardEventDelegate;

@interface IESECShopSLITagListElementView : IESECSliceXBaseContentElementView <IESECShopTagListViewDelegate, IESECSliceXFlexObserver> {
    struct CGSize { double width; double height; } _viewSize;
    double _fontScaleRatio;
    BOOL _hasReLayoutSubviews;
    IESECShopTagListModel *_tagListToUpdate;
    NSMutableSet *_exposedTagSet;
}

@property (weak, nonatomic) id<IESECShopSLICardEventDelegate> eventDelegate;
@property (nonatomic) double colorAnimationPercent;
@property (copy, nonatomic) NSString *widthMode;
@property (retain, nonatomic) IESECShopTagListModel *tagList;
@property (retain, nonatomic) IESECShopTagListView *tagListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clickExtraParams;
- (void)tagListShow:(id)a0;
- (void)clickTagList:(id)a0;
- (void)clickTagContainer:(id)a0;
- (void)updateWithModel:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)flexDidLayout:(id)a0;
- (void)exposeTagsIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
