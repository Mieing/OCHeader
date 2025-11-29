@class UIView, NSString, AWEDitoPOIFavoriteFilterComponentViewModel, AWEBinding, UIImageView, UIButton, AWEDitoPOIFavoriteTableViewFilterContentView, UILabel;

@interface AWEDitoPOIFavoriteFilterComponentView : DitoComponentView <AWEDitoPOIFavoriteTableViewFilterContentViewDelegate>

@property (weak, nonatomic) AWEDitoPOIFavoriteFilterComponentViewModel *viewModel;
@property (retain, nonatomic) UILabel *areaLabel;
@property (retain, nonatomic) UIImageView *areaArrowImage;
@property (retain, nonatomic) UIButton *areaButton;
@property (retain, nonatomic) AWEDitoPOIFavoriteTableViewFilterContentView *areaFilter;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UIImageView *typeArrowImage;
@property (retain, nonatomic) UIButton *typeButton;
@property (retain, nonatomic) AWEDitoPOIFavoriteTableViewFilterContentView *typeFilter;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *sortArrowImage;
@property (retain, nonatomic) UIButton *sortFilterButton;
@property (retain, nonatomic) AWEDitoPOIFavoriteTableViewFilterContentView *sortFilter;
@property (nonatomic) unsigned long long lastShowingContent;
@property (retain, nonatomic) UIView *sortView;
@property (retain, nonatomic) UIButton *firstSortButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *secondSortButton;
@property (nonatomic) long long areaLabelWidth;
@property (nonatomic) long long typeLabelWidth;
@property (retain, nonatomic) AWEBinding *binding;
@property (nonatomic) BOOL isLargeMode;
@property (nonatomic) unsigned long long showingContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sortByTime;
- (id)originBackgroundColor;
- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)setupAreaFilterUI;
- (void)setupTypeFilterUI;
- (void)changeAreaFilterStatus;
- (double)adaptFontSize:(double)a0;
- (id)textUnselectedColor:(BOOL)a0;
- (void)changeTypeFilterStatus;
- (void)setupSortButton;
- (void)setupSortFilterView;
- (id)getPOIContext;
- (void)updateSortUI;
- (id)textSelectedColor;
- (id)imageUnselectedColor;
- (id)imageSelectedColor;
- (void)filterContentDismissingAnimated;
- (void)remakeSelectorConstrain;
- (void)resetFilterButton;
- (void)changeFilterContent:(unsigned long long)a0 toOpenStatus:(BOOL)a1 animated:(BOOL)a2;
- (void)rotateArrowFromUnfold:(BOOL)a0 arrow:(id)a1;
- (void)sortByDistance;
- (void)sortByDistanceWithPermission;
- (void)changeSortTypeFilterStatus;
- (void)didTriggerParamsChange;
- (void)willDismissingContentWithContentType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateColor;
- (void)updateFont;

@end
