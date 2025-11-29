@class NSArray, MMUILabel;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab : UIScrollView

@property (retain, nonatomic) NSArray *labelArray;
@property (retain, nonatomic) MMUILabel *selectedTabLabel;
@property (copy, nonatomic) id /* block */ onLabelClickedAtIndex;

- (id)initWithTabLabelTextArray:(id)a0;
- (void)initLabelArrayWithLabelTextArray:(id)a0;
- (id)createLabelWithText:(id)a0;
- (void)layoutSubviews;
- (void)setSelectedTabWithLabelText:(id)a0;
- (void)updateLabel:(id)a0 withSelected:(BOOL)a1;
- (void)updateLabelOrigin:(id)a0;
- (void)configLabelSize:(id)a0;
- (double)tabContainerHeight;
- (double)tabHeightInterval;
- (double)tabWidthInterval;
- (double)firstTabLeftInterval;
- (void)onTapStyleTabLabel:(id)a0;
- (void)onSelectTab:(id)a0;
- (void).cxx_destruct;

@end
