@class MMLiveRewardGiftNewCustomizationEditLogic, MMLiveRewardGiftStyleTabLabel, NSMutableArray, MMFinderLiveGiftNewCustomizationModel;

@interface MMLiveRewardGiftNewCustomizationStyleTabContainerView : UIScrollView

@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic;
@property (readonly, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (retain, nonatomic) NSMutableArray *styleTabLabelList;
@property (retain, nonatomic) MMLiveRewardGiftStyleTabLabel *currentSelectTabLabel;
@property (copy, nonatomic) id /* block */ selectChangeCallback;

+ (double)preferHeight;
+ (double)styleTabLabelLeftInset;

- (id)initWithCustomizationEditLogic:(id)a0;
- (void)commonInit;
- (void)configCustomizationEditLogic:(id)a0;
- (void)addStyleSelectTabLabels;
- (void)addComponentSelectTabLabel:(id)a0;
- (void)addNameSelectTabLabel:(id)a0;
- (id)createGiftStyleTabLabel:(id)a0;
- (void)updateTabLabelUIForSelect:(id)a0;
- (void)updateStyleTabLabelOrigin:(id)a0;
- (void)updateContainerContentSize;
- (void)layoutSubviews;
- (void)layoutAllTabLabels;
- (void)loadDataAsync:(BOOL)a0;
- (void)removeAllTabLabels;
- (void)onSelectTab:(id)a0;
- (id)getTabLabelWithSelectStyle:(id)a0;
- (double)selectTabContainerLeftInset;
- (void)onTapStyleTabLabel:(id)a0;
- (void).cxx_destruct;

@end
