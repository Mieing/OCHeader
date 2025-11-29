@class NSDiffableDataSourceSnapshot, MentionListLastReadInfo, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray, NSData;
@protocol WCFinderWechatMentionVMDelegate;

@interface WCFinderWechatMentionVM : NSObject

@property (nonatomic) long long tabType;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) NSMutableArray *readArray;
@property (retain, nonatomic) NSMutableArray *unreadArray;
@property (retain, nonatomic) NSMutableSet *svrMentionIDSet;
@property (copy, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) MentionListLastReadInfo *lastReadInfo;
@property (nonatomic) double cacheContainerWidth;
@property (nonatomic) BOOL shouldShowNewTips;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (nonatomic) BOOL shouldShowIgnoreTips;
@property (nonatomic) BOOL ignoredMentionsExpanded;
@property (weak, nonatomic) id<WCFinderWechatMentionVMDelegate> delegate;

- (id)initWithTabType:(long long)a0;
- (void)fetchFirstPageData;
- (void)refetchData;
- (void)clearDataWithNotifyChange:(BOOL)a0;
- (void)expandIgnoredMentionWithCompletion:(id /* block */)a0;
- (void)fetchMoreData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (long long)getRequestScene;
- (void)appendMentionList:(id)a0;
- (id)dataSnapshot;
- (void)closeIgnoreTips;
- (BOOL)shouldShowExpandFooter;
- (id)cellVMIndexPath:(id)a0;
- (BOOL)_showNewMentionTipsHeader:(long long)a0;
- (unsigned long long)unreadMentionCount;
- (unsigned long long)readMentionCount;
- (BOOL)dataEmpty;
- (void)deleteMentionWithIndexPath:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)deleteMentionWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
