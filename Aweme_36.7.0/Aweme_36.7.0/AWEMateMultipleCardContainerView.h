@class AWEFindFriendsMultiCardViewModel, NSArray, NSMutableIndexSet, AWEBinding, UIImageView, NSMutableArray, AWEMateMultipleCardFooterView;

@interface AWEMateMultipleCardContainerView : UIView

@property (retain, nonatomic) NSMutableArray *cellViews;
@property (retain, nonatomic) AWEMateMultipleCardFooterView *footerView;
@property (retain, nonatomic) NSArray *currentModels;
@property (retain, nonatomic) AWEBinding *viewModelBinding;
@property (retain, nonatomic) NSMutableIndexSet *replacedCardsIndices;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (nonatomic) BOOL isCardDisplaying;
@property (retain, nonatomic) AWEFindFriendsMultiCardViewModel *viewModel;
@property (copy, nonatomic) id /* block */ actionDoneBlock;
@property (copy, nonatomic) id /* block */ dislikeTheLastUserBlock;

+ (double)cardsHeight;

- (void)p_layoutCell:(id)a0 atIndex:(unsigned long long)a1;
- (void)p_replaceAllCards;
- (void)reloadCardsWithAnimated:(BOOL)a0;
- (void)p_dislikeUserAtIndex:(unsigned long long)a0;
- (void)p_addMateUserAtIndex:(unsigned long long)a0;
- (void)p_transferToProfileAtIndex:(unsigned long long)a0 enterMethod:(id)a1;
- (void)p_setupCell:(id)a0 atIndex:(unsigned long long)a1;
- (void)p_removeCardsAtIndices:(id)a0 animated:(BOOL)a1;
- (void)p_insertCardsAtIndices:(id)a0 animated:(BOOL)a1;
- (void)p_layoutAndSetupCellsWithAnimated:(BOOL)a0;
- (void)p_setupUI;
- (void)viewDidAppear;
- (double)topPadding;
- (void).cxx_destruct;
- (id)init;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end
