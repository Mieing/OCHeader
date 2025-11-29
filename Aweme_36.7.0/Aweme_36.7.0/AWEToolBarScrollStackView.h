@class NSArray, AWEToolBarViewModel;
@protocol AWEToolBarScrollStackViewDelegate;

@interface AWEToolBarScrollStackView : UIScrollView

@property (weak, nonatomic) AWEToolBarViewModel *barViewModel;
@property (weak, nonatomic) NSArray *allBarItemInfoArray;
@property (retain, nonatomic) NSArray *allBarItemViews;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSArray *barItemArray;
@property (retain, nonatomic) NSArray *lastBarItemArray;
@property (weak, nonatomic) id<AWEToolBarScrollStackViewDelegate> scrollStackViewDelegate;

- (void)updateBarItemInfosStatusWithDisplayBarItemInfoArray:(id)a0 lastBarItemInfoArray:(id)a1;
- (void)updateListContent:(BOOL)a0;
- (void)cleanAllBarItemsAnimationType;
- (id)generateDisplayItemIDSetWithDisplayBarItemInfoArray:(id)a0;
- (void)findDeleteGroupWithDisplayBarItemSet:(id)a0;
- (id)generateLastShowedItemIDSetWithLastBarItemInfoArray:(id)a0;
- (void)findInsertGroupWithLastShowedItemIDSet:(id)a0;
- (void)findMoveGroupWithDisplayBarItemInfoArray:(id)a0;
- (void)findReplaceGroupWithDisplayBarItemInfoArray:(id)a0 lastBarItemInfoArray:(id)a1;
- (void)updateDisplayItemViewFrameWithDisplayBarItemInfoArray:(id)a0;
- (id)valueWithItemID:(void *)a0;
- (void)updateItemsFrame;
- (id)initWithBarViewModel:(id)a0;
- (void)updateDisplayBarItemArray:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
