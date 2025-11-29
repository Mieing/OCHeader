@class MMListenCategoryItem, UIView, MMWebImageView, TingCoverInfo, MMLiveGradientLayerView, UIImageView, TingPAGImageView, NSString, TingPAGCoverController, MMUILabel, TingPagCoverView;
@protocol TingCategoryCoverViewDelegate;

@interface TingCategoryCoverView : UIView <MMWebImageViewDelegate, TingPAGCoverControllerDelegate>

@property (retain, nonatomic) TingCoverInfo *coverInfo;
@property (retain, nonatomic) MMListenCategoryItem *sourceCategoryItem;
@property (retain, nonatomic) MMLiveGradientLayerView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebImageView *commonCoverView;
@property (retain, nonatomic) TingPagCoverView *pagCoverView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UIView *highlightedMaskView;
@property (retain, nonatomic) MMWebImageView *authorIconView;
@property (retain, nonatomic) UIView *authorIconContainerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *pagIconView;
@property (retain, nonatomic) UIView *styleCoverBgView;
@property (retain, nonatomic) MMWebImageView *styleCoverView;
@property (retain, nonatomic) MMUILabel *masterTitle;
@property (retain, nonatomic) UIImageView *representIconView;
@property (retain, nonatomic) TingPAGCoverController *pagCoverController;
@property (retain, nonatomic) TingPAGImageView *pagCoverImageView;
@property (nonatomic) BOOL isAuthorHeadImgHidden;
@property (weak, nonatomic) id<TingCategoryCoverViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL callbackOnMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconImage;
- (double)iconWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initPagCoverImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initBackgroundColors;
- (void)updateWithImage:(id)a0;
- (void)updateWithUrl:(id)a0;
- (void)updateWithCategoryItem:(id)a0;
- (void)updateWithCoverController:(id)a0;
- (void)updateWithCoverInfo:(id)a0;
- (void)initPAGFileIfNeed;
- (void)displayWithCoverStyle;
- (BOOL)shouldShowIconView;
- (id)getIconViewImage;
- (id)getPAGIconImage;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void)setIconHidden:(BOOL)a0;
- (void)resetDefaultBackground;
- (void)updateBackgroundWithImage:(id)a0;
- (void)_updateBackgroundWithImage:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void)pagController:(id)a0 didLoadImage:(id)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;

@end
