@class NSArray, AWEIMShareCreateChatNavTitleView, NSString, UILabel, AWEIMConversationPuller, AWEUILoadingView;
@protocol AWEIMShareCurrentGroupListViewControllerDelegate;

@interface AWEIMShareCurrentGroupListViewController : AWEIMListBaseViewController

@property (retain, nonatomic) UILabel *completionLabel;
@property (retain, nonatomic) AWEIMConversationPuller *conversationPuller;
@property (retain, nonatomic) AWEUILoadingView *firstLoadingView;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasMoreConvList;
@property (nonatomic) double lastBeginDraggingContentOffsetY;
@property (nonatomic) BOOL isFechReady;
@property (nonatomic) BOOL isShowLoged;
@property (retain, nonatomic) AWEIMShareCreateChatNavTitleView *titleView;
@property (nonatomic) long long titleAlign;
@property (weak, nonatomic) id<AWEIMShareCurrentGroupListViewControllerDelegate> shareCurrentGroupListViewControllerDelegate;
@property (retain, nonatomic) NSArray *initialSelectedShareModelArray;
@property (nonatomic) BOOL fromOpenPlatform;
@property (copy, nonatomic) NSString *navigationTitle;
@property (nonatomic) BOOL isFromShareExtension;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)p_scrollViewDidEndScroll:(id)a0;
- (void)p_dismiss;
- (void)p_updateNavBar;
- (void)updateMultiselectCount:(long long)a0;
- (void)p_didTapComplete;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (BOOL)canSelectCellAtIndexPath:(id)a0;
- (void)p_addFooter;
- (void)p_setupTitleView;
- (void)prepareDataWithShareModelList:(id)a0 hasMore:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)fetchData;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)colorNamed:(id)a0;

@end
