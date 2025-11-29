@class NSString, NSArray, UIImageView, AWEFollowListGroupFilterView, UILabel, UIView, AWEFollowListUserListHeaderFilterView;

@interface AWEFollowListUserListHeader : UICollectionReusableView <DUXSelectPopoverDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFollowListUserListHeaderFilterView *filterView;
@property (retain, nonatomic) UIImageView *sortingIcon;
@property (retain, nonatomic) UILabel *sortingLabel;
@property (retain, nonatomic) UIView *sortingView;
@property (nonatomic) BOOL needReverseLibra;
@property (copy, nonatomic) NSArray *sortingOptions;
@property (copy, nonatomic) NSArray *groupFilterList;
@property (retain, nonatomic) AWEFollowListGroupFilterView *groupFilterView;
@property (copy, nonatomic) id /* block */ sortingViewEnableBlock;
@property (nonatomic) long long defaultSort;
@property (copy, nonatomic) id /* block */ filterClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWERelationDOUYINHTSAdapterClass;
+ (double)sortInfoHeight;
+ (double)groupFilterHeight;

- (void)setFollowingCount:(id)a0;
- (id)aAWERelationDOUYINHTSAdapter;
- (void)setupSortView;
- (void)setupGroupFilterView;
- (void)updateSortingElementTitle:(id)a0;
- (long long)sortingType:(id)a0;
- (id)sortTextFromType:(long long)a0;
- (void)sortingElementClicked;
- (id)sortingTextArray;
- (void)selectPopover:(id)a0 didSelectOption:(id)a1;
- (id)currentTypeLabelColor:(id)a0;
- (void)setInitialSortType:(long long)a0;
- (id)currentLabelColor:(BOOL)a0;
- (void)configGroupFilterList:(id)a0 currentGroupFilterType:(long long)a1 groupFilterClickedBlock:(id /* block */)a2 groupFilterEnableBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)titleFontSize;

@end
