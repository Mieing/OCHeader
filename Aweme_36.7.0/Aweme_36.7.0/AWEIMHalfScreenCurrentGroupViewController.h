@class UIView, NSString, NSArray, UIImageView, NSDictionary, UITableView, NSMutableSet, AWEIMConversationPuller, UILabel, UIColor;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMHalfScreenCurrentGroupViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMHalfScreenCurrentGroupTableCellDelegate>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMConversationPuller *conversationPuller;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *firstLoadingView;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasMoreConvList;
@property (nonatomic) BOOL fetchDataByLocalDB;
@property (nonatomic) double startFetchTime;
@property (nonatomic) double lastBeginDraggingContentOffsetY;
@property (retain, nonatomic) NSMutableSet *trackConsecutiveChatShowSet;
@property (retain, nonatomic) NSArray *currentGroupArray;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (nonatomic) BOOL isFullScreenStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)handleThemeChangeNotification;
- (id)initWithParamDict:(id)a0;
- (void)p_scrollViewDidEndScroll:(id)a0;
- (void)p_back;
- (void)prepareDataWithShareModelList:(id)a0 hasMore:(BOOL)a1;
- (id)p_backgroundColor;
- (void)sendIncentiveInviteWithModel:(id)a0;
- (void)__handleLeaveGroupChatNotification:(id)a0;
- (void)fetchAllGroupShareModelByLocalDB;
- (void)trackFetchAllGroupEventwithDataFrom:(id)a0 errorCode:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)loadView;

@end
