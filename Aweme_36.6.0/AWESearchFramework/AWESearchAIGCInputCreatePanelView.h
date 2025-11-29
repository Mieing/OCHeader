@class UITableView, NSString, AWESearchAIGCInputCreatePanelViewModel, AWESearchAIGCInputCreatePanelRequireOptionView, UITapGestureRecognizer;
@protocol AWESearchAIGCInputCreatePanelViewDelegate;

@interface AWESearchAIGCInputCreatePanelView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, AWESearchAIGCInputCreatePanelHeaderCellDelegate, AWESearchAIGCInputCreatePanelGenreCellDelegate, AWESearchAIGCInputCreatePanelRequirementCellDelegate>

@property (retain, nonatomic) AWESearchAIGCInputCreatePanelViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWESearchAIGCInputCreatePanelViewDelegate> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWESearchAIGCInputCreatePanelRequireOptionView *optionView;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (id)createSearchQueryWithOriginQuery:(id)a0;
- (id)selectedGenreModel;
- (void)closeRequirementOptionViewIfNeed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 agentInfo:(id)a1 delegate:(id)a2;
- (void)panelGenreCell:(id)a0 didSelectGenre:(id)a1;
- (void)panelHeaderCell:(id)a0 shouldCloseWithViewModel:(id)a1;
- (void)panelRequirementCell:(id)a0 didSelectRequirement:(id)a1 targetView:(id)a2;
- (void)refreshColors;
- (double)cellHeightWithCellViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (id)searchSource;
- (void)setupUI;
- (void)touchAction:(id)a0;

@end
