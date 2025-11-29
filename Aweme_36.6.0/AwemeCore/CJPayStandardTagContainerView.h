@class UIStackView, NSArray, UIScrollView, NSMutableArray;

@interface CJPayStandardTagContainerView : UIView

@property (nonatomic) BOOL isOverLength;
@property (nonatomic) double tagContainerMaxWidth;
@property (retain, nonatomic) UIStackView *tagContentView;
@property (retain, nonatomic) UIScrollView *tagScrollView;
@property (retain, nonatomic) NSMutableArray *renderTagViews;
@property (retain, nonatomic) NSMutableArray *lastRenderTagViews;
@property (retain, nonatomic) NSArray *tagModels;
@property (retain, nonatomic) NSArray *renderTagModels;
@property (nonatomic) long long tagSizeType;
@property (nonatomic) BOOL needAnimation;

- (void)refreshContentViewWithTagModels:(id)a0;
- (void)updateTagContainerLayoutWithMaxWidth:(double)a0;
- (id)getCurrentRenderTagDatasource;
- (void)makeUI;
- (void)p_animateTagViews;
- (void)p_adjustTagContentSize:(long long)a0;
- (id)p_analysisTagsModelWithTagsJson:(id)a0;
- (void)p_resetTagContentParams;
- (id)p_createTagItemWithTagModel:(id)a0;
- (double)p_getTagContainerHeight;
- (void)p_tagsFromHiddenToShowed;
- (void)p_tagsFromShowedToHidden;
- (void)p_tagsFromLessToMore;
- (void)p_tagsFromMoreToLess;
- (void)refreshContentViewWithTagJsonArray:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)init;

@end
