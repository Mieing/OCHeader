@class NSString, UIImageView, AWEPOIDetailNGPOIMallFilterContentView, UILabel, AWEDitoPOIMallPageContext, UIButton;
@protocol AWEPOIDetailNGPOIMallFilterClickDelegate;

@interface AWEPOIDetailNGPOIMallFilterContainer : UIView <AWEDitoPOIMallTableViewFilterContentViewDelegate>

@property (retain, nonatomic) UILabel *filterLabel;
@property (retain, nonatomic) UIImageView *filterArrowImage;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) AWEPOIDetailNGPOIMallFilterContentView *filterTableView;
@property (retain, nonatomic) AWEDitoPOIMallPageContext *context;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (weak, nonatomic) id<AWEPOIDetailNGPOIMallFilterClickDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showFilter;
- (void)bindStateAndAction;
- (id)textSelectedColor;
- (void)rotateArrowFromUnfold:(BOOL)a0 arrow:(id)a1;
- (void)initFilterContextWithModel:(id)a0 tabType:(unsigned long long)a1 extraParams:(id)a2;
- (id)firstSelectOption:(id)a0 targetText:(id)a1;
- (void)didTapL1Filter;
- (id)textUnSelectedFont;
- (id)textUnselectedColor;
- (void)changeFilterIfNeed;
- (void)changeTextColorIfNeed;
- (void)didTabClick:(id)a0 filterText:(id)a1;
- (void)resetFilterSessionID;
- (id)textSelectedFont;
- (void)dissMissFilter;
- (void)didTapL2Filter:(id)a0;
- (void)didTapL3Filter:(id)a0;
- (void)didTabChange:(id)a0 toTab:(id)a1 isSelectedL3:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
