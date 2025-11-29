@class CAShapeLayer, SightIconView, UIView, UILabel, MMWebImageView;

@interface WAMainFrameTaskBarSectionMyWeAppView : WAMainFrameTaskBarSectionWeAppView {
    UIView *_dragMaskView;
    CAShapeLayer *_maskBorder;
    UIView *_dragAddIcon;
    UILabel *_dragLabel;
    MMWebImageView *_moreWeAppIcon;
    BOOL _isInArea;
    BOOL _isLastInsertToMore;
}

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) SightIconView *loadingView;

+ (double)totalCellHeight:(id)a0 maxShowCount:(long long)a1;

- (void)initView;
- (id)title;
- (id)moreTitle;
- (void)layoutSubviews;
- (void)commonLayoutTopRightArea;
- (void)layoutDragLabel;
- (void)prepareForReuse;
- (struct CGPoint { double x0; double x1; })getWeAppMoreIconPos;
- (void)setWeAppMoreIcon:(id)a0;
- (id)moreIconWeAppUsername;
- (void)onClickMore;
- (BOOL)collectionView:(id)a0 itemAtIndexPath:(id)a1 canMoveToIndexPath:(id)a2;
- (void)onLongPress:(id)a0;
- (BOOL)isInStarList:(id)a0;
- (void)showTipsViewController:(id)a0;
- (void)notifyItemInserted:(long long)a0 newItems:(id)a1 arrMyWeAppItemWhenShowCommonUse:(id)a2;
- (void)notifyItemRemoved:(id)a0 arrMyWeAppItemWhenShowCommonUse:(id)a1;
- (void)notifyDragStateChange:(BOOL)a0;
- (BOOL)notifyViewDragTo:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInDragArea:(struct CGPoint { double x0; double x1; })a0;
- (void)deleteToSection;
- (void)handleClickUnStar;
- (void)handleClickSearch;
- (void)updateTitle;
- (void)startLoading;
- (void)stopLoading;
- (void)initLoadingView;
- (void).cxx_destruct;

@end
