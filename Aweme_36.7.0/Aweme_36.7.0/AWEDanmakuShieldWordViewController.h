@class UIView, AWEAwemeModel, NSString, AWEDanmakuRecommendShieldTableViewCellModel, UIButton, UITableView, NSMutableArray, UILabel, NSIndexPath;
@protocol AWEDanmakuShieldWordViewControllerDelegate, AWECommentInputViewManagerProtocol;

@interface AWEDanmakuShieldWordViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWECommentInputViewManagerDelegate, AWEDanmakuShieldWordViewControllerProtocol>

@property (nonatomic) unsigned long long danmakuScene;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UILabel *shieldGuideLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIButton *addShieldButton;
@property (retain, nonatomic) NSMutableArray *shieldWords;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) AWEDanmakuRecommendShieldTableViewCellModel *recommendShieldTableViewCellModel;
@property (nonatomic) BOOL canShowRecommendShieldTableViewCell;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> shieldWordInputViewManager;
@property (nonatomic) BOOL userInteractive;
@property (nonatomic) BOOL isClickShieldWordComment;
@property (nonatomic) BOOL hasShowComment;
@property (retain, nonatomic) NSIndexPath *index;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL isClickDislikeWordComment;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEDanmakuShieldWordViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)custom_commentInputViewCustomSendAction:(id)a0;
- (BOOL)custom_commentInputViewShouldReturn:(id)a0;
- (void)setUI;
- (void)updateUIWithUserInteractive:(BOOL)a0;
- (void)updateUIWithScene;
- (void)refreshContentUI:(BOOL)a0;
- (void)showCommentInputViewWithContent:(id)a0;
- (void)addShieldWord:(id)a0;
- (void)deleteShieldWord:(id)a0;
- (void)handleShildAddButtonClick;
- (void)addLastDislikeWordToShieldWord;
- (void)ignoreLastDislikeWord;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithScene:(unsigned long long)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
