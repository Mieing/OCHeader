@class AWEAwemeModel, UIView, NSArray, AWELandScapeDanmakuListTableViewCell, AWEVideoPlayDanmakuModel, UIImageView, AWEUILoadingView, UITableView, NSString, DUXPopover, UILabel, AWEDanmakuModel;
@protocol AWEDanmakuListTableViewControllerDelegate;

@interface AWEDanmakuListTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWELandScapeDanmakuListTableViewCellDelegate, DUXActionSheetDelegate, AWEDanmakuOptionBubbleViewDelegate, AWEDanmakuListTableViewControllerProtocol>

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSArray *danmakuDataList;
@property (nonatomic) long long danmukuOffset;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyDescLabel;
@property (retain, nonatomic) UIView *topLine;
@property (nonatomic) unsigned long long danmakuScene;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) AWEDanmakuModel *currentSelectDanmakuModel;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *currentDanmakuModel;
@property (nonatomic) BOOL hasFetched;
@property (nonatomic) BOOL hasResetNum;
@property (nonatomic) long long danmakuCountCache;
@property (retain, nonatomic) AWELandScapeDanmakuListTableViewCell *currentClickCell;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) id<AWEDanmakuListTableViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (id)aAWEPadModuleAdapter;
- (BOOL)checkLogin;
- (id)configBubbleView:(id)a0;
- (void)hideBubbleIfNeed;
- (id)initWithDanmakuScene:(unsigned long long)a0 model:(id)a1;
- (void)updateCountNum:(long long)a0;
- (void)diggTapAction;
- (void)deleteTapAction;
- (void)reportTapAction;
- (void)fetchDanmakuData;
- (void)updateLandsacapeUI;
- (double)safeAreaOffset;
- (void)configWithDanmakuScene:(unsigned long long)a0;
- (void)p_loadMoreData;
- (void)showEmptyViewWithNoNetWork:(BOOL)a0;
- (void)p_dismissLoadingWithAnimated:(BOOL)a0;
- (id)filteredDuplicateModels:(id)a0;
- (id)danmakuBubbleViewElementsForModel:(id)a0;
- (void)digDanmaku:(id)a0 cellHadDigged:(BOOL)a1;
- (void)showDanmakuPopOverTargetView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)deleteDanmaku:(id)a0;
- (void)handleDigDanmakuListCell:(id)a0 model:(id)a1;
- (void)handleDanmakuListCellDescClick:(id)a0 model:(id)a1 clickPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)handleDislikeDanmakuListCell:(id)a0 dislike:(BOOL)a1 model:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reset;
- (void)viewDidDisappear:(BOOL)a0;

@end
