@class UIView, NSString, UITapGestureRecognizer, UIImageView, IESECShopTagListModel, NSMutableArray, NSMapTable, IESECShopFont;
@protocol IESECShopTagListViewDelegate;

@interface IESECShopTagListView : UIView <IESECShopTagListView> {
    UIView *_contentView;
    IESECShopFont *_fontContext;
    BOOL _hasLayout;
}

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) NSMapTable *widthCache;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) NSMutableArray *tagContainers;
@property (nonatomic) double fontScaleRatio;
@property (weak, nonatomic) id<IESECShopTagListViewDelegate> delegate;
@property (readonly, nonatomic) IESECShopTagListModel *model;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) BOOL shouldDrawBorderManually;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (void)updateWithModel:(id)a0 maxWidth:(double)a1;
- (BOOL)needScale;
- (id)getVisibleTagContainerModels;
- (void)updateColorWithPercent:(double)a0;
- (id)getTagContainers;
- (void)hideTagContainersIfNeeded;
- (void)scaleLowestPriorityTagContainerIfNeeded;
- (void)scaleAllTagContainersIfNeeded;
- (double)calculateAllContainersWidth:(id)a0;
- (void)sortTagContainersByPriority;
- (void)configTagContainerViews;
- (void)handleMatchParent;
- (void)handleInnerConstraintWithWidth:(double)a0;
- (id)lowestPriorityTagContainerModels;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
