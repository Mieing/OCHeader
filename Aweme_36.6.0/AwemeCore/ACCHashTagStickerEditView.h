@class UIView, ACCHashTagSearchBar, UITapGestureRecognizer, ACCHashtagStickerEditStateView, NSArray, NSString, UITableView, UIVisualEffectView;
@protocol ACCHashTagStickerViewUIProtocol, ACCHashTagStickerEditViewDelegate;

@interface ACCHashTagStickerEditView : UIView <ACCHashTagSearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *stickerMaskView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGPoint { double x; double y; } prePanLocation;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIView *resultView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ACCHashtagStickerEditStateView *stateView;
@property (weak, nonatomic) UIView *stickerWrapper;
@property (retain, nonatomic) UIView<ACCHashTagStickerViewUIProtocol> *stickerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapStickerGesture;
@property (copy, nonatomic) id /* block */ pendingSearchTask;
@property (weak, nonatomic) id<ACCHashTagStickerEditViewDelegate> delegate;
@property (nonatomic) long long panelStatus;
@property (retain, nonatomic) ACCHashTagSearchBar *searchBar;
@property (retain, nonatomic) NSArray *recommendHashTags;
@property (retain, nonatomic) NSArray *searchHashTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)textCount:(id)a0;
- (BOOL)searchBarTextField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)searchBarTextBeginEditingWithKeyboardHeight:(double)a0;
- (void)searchBarTextEndEditing;
- (void)searchBarTextDidChange:(id)a0;
- (void)clickedStickerView;
- (void)endEditingHashtag;
- (id)safeSubstring:(id)a0 maxLength:(long long)a1;
- (id)hashTagItems;
- (id)initEditView;
- (void)startEditWithStickerView:(id)a0 completion:(id /* block */)a1;
- (BOOL)fromRecommend;
- (void)handlePan:(id)a0;
- (void)reloadData;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)refreshUI;
- (void)setupUI;
- (void)setupGestures;

@end
