@class NSString, UIImageView, WAAppItemData, UILabel, UIView, MMWebImageView;

@interface WAMainFrameTaskBarSectionWeAppCell : UICollectionViewCell <WAContactMgrExtension>

@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIImageView *fromOuterTagView;
@property (retain, nonatomic) WAAppItemData *taskItem;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) BOOL isShowAsMore;
@property (nonatomic) BOOL darkStyle;
@property (nonatomic) BOOL isMoving;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (nonatomic) BOOL forbidLoadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeByDataModel:(id)a0;
+ (double)itemSizeFactor;
+ (double)itemWidth;
+ (double)itemHeight:(id)a0;
+ (double)itemInnerMargin;
+ (double)getHeaderWidth;
+ (double)getMoreIconWidth;
+ (double)getNameLabelToHeadImageMargin;
+ (id)getDisplayName:(id)a0;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateTaskItem:(id)a0;
- (id)getDragView;
- (id)getCurrentTaskItem;
- (void)showHighlight:(BOOL)a0;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)initView;
- (void)setTitleColor:(id)a0;
- (void)setAlpha:(double)a0;
- (void)initData;
- (void)layoutSubviews;
- (void)onContactUpdate:(id)a0;
- (void)onModifyWeAppContact:(id)a0;
- (void).cxx_destruct;

@end
