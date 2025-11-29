@class NSNumber, NSString, AWEInteractionVoteStickerInfoModel, UIView, AWEVoteStickerDetailHeaderView, UITableView, UIVisualEffectView, AWEVoteStickerManager, UILabel;

@interface AWEVoteStickerDetailViewController : UIViewController <IESDragDismissViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, AWEVoteStickerDetailViewControllerProtocol>

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) AWEVoteStickerDetailHeaderView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) AWEVoteStickerManager *voteStickerManager;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL darkMode;
@property (retain, nonatomic) AWEInteractionVoteStickerInfoModel *voteInfo;
@property (nonatomic) BOOL shouldShowLater;
@property (retain, nonatomic) NSNumber *selectedOptionID;
@property (retain, nonatomic) UIView *baseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)closeBtnClicked:(id)a0;
- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (BOOL)enableMutilOption;
- (void)optionViewTapped:(id)a0;
- (void)_layoutBaseView:(BOOL)a0;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (long long)currentOptionID;
- (void)trackEnterPersonalAtIndexPath:(id)a0;
- (void)_loadMoreData;
- (void)_refreshData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)baseHeight;
- (void)viewDidLoad;
- (void)_reloadData;

@end
