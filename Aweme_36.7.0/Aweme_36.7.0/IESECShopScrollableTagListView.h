@class IESECShopTagListModel, NSString, NSMutableSet, UIScrollView, IESECShopTagListView, IESECShopTagScrollConfig;
@protocol IESECShopScrollableTagListDelegate;

@interface IESECShopScrollableTagListView : UIView <IESECShopTagListViewDelegate, UIScrollViewDelegate, CAAnimationDelegate> {
    unsigned long long _scrollState;
    NSMutableSet *_exposedTagSet;
}

@property (nonatomic) double colorAnimationPercent;
@property (retain, nonatomic) IESECShopTagListModel *tagList;
@property (retain, nonatomic) IESECShopTagListView *tagListView;
@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (nonatomic) double fontScaleRatio;
@property (weak, nonatomic) id<IESECShopScrollableTagListDelegate> delegate;
@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) IESECShopTagScrollConfig *scrollConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clickExtraParams;
- (void)tagListShow:(id)a0;
- (void)clickTagList:(id)a0;
- (void)clickTagContainer:(id)a0;
- (void)startScroll;
- (void)endScroll;
- (void)updateWithModel:(id)a0 maxWidth:(double)a1;
- (void)updateColorAnimationWithPercent:(double)a0 forceUpdate:(BOOL)a1;
- (id)scrollAnimationLayer;
- (void)removeScrollAnimation;
- (void)exposeTagsIfNeeded;
- (void)updateColorAnimationWithPercent:(double)a0;
- (void)pauseScroll;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupViews;

@end
