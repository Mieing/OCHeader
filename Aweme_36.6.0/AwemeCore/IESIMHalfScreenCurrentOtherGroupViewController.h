@class UILabel, MASConstraint, NSMutableArray, NSString, AWEIMConversationPuller, UIView, UITableView;

@interface IESIMHalfScreenCurrentOtherGroupViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESIMGroupSettingsTurnOpenGroupMessage, IESIMHalfScreenCurrentOtherGroupTableViewCellDelegate>

@property (retain, nonatomic) AWEIMConversationPuller *conversationPuller;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) UIView *dragHintView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleDescriptionLabel;
@property (retain, nonatomic) UIView *introduceTopView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerEmptyView;
@property (retain, nonatomic) MASConstraint *containerHeightConstraint;
@property (retain, nonatomic) NSMutableArray *currentSocialGroupArray;
@property (nonatomic) long long changeSocialGroupCount;
@property (nonatomic) double contentCornerRadius;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)themeDidChange:(id)a0;
- (void)didClickRightButton:(id)a0;
- (void)didConversationUpdateToPublicGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void)prepareDataWithShareModelList:(id)a0 hasMore:(BOOL)a1;
- (void)updateBackGroundColor;
- (void)p_deleteDissovleGroup:(id)a0;
- (void)p_observeOtherGroupNumberReduceWithShareModelIfNeed:(id)a0;
- (double)getContainerHeight;
- (void)p_fetchAllGroupShareModelByLocalDB;
- (BOOL)p_isSocialGroupNormal:(id)a0;
- (void)p_observeConversationWithShareModelList:(id)a0 hasMore:(BOOL)a1;
- (id)p_getTitleContent;
- (id)p_getSubtitleContent;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
