@class NSString, NSMutableArray;

@interface WCNewCommentListViewController : WCCommentListViewController

@property (retain, nonatomic) NSMutableArray *arrRelatedToMeCommentList;
@property (retain, nonatomic) NSMutableArray *arrMutualFriendsCommentList;
@property (retain, nonatomic) NSMutableArray *arrMoreCommentList;
@property (retain, nonatomic) NSMutableArray *arrSectionTitleType;
@property (retain, nonatomic) NSString *curUserName;
@property (nonatomic) BOOL shouldShowSubSectionTitle;

- (BOOL)isMentionedMySelf:(id)a0;
- (BOOL)isRefSelfCommentWithMsg:(id)a0;
- (BOOL)isMessageRelatedToMe:(id)a0;
- (id)createRelatedToMeCell:(id)a0;
- (id)createCommonFriendsCell:(id)a0;
- (id)createAllMessagesCell;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)initTableFooterView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)commentListVCTitle;
- (id)mutualFriendCommentListVCTitle;
- (id)relatedToMeCommentListVCTitle;
- (id)rightBarButtonItem;
- (id)tableViewTailColor;
- (long long)tableViewStyle;
- (id)getWCMessagesWithDataArray:(id)a0;
- (long long)getWCCommentListCount:(long long)a0;
- (long long)getCommentMessageListType:(id)a0 dataItem:(id)a1 moreData:(BOOL)a2;
- (void)addWCMessages:(id)a0 forListType:(long long)a1;
- (BOOL)removeWCMessages:(id)a0 indexPath:(id)a1;
- (void)updateArrSectionTitleType;
- (void)updateCommentListTitle;
- (void)clearCommentLists;
- (void)displayMoreMessages:(id)a0;
- (void)updateMutualFriendsInteractionReminderState:(BOOL)a0;
- (void).cxx_destruct;

@end
