@class NSArray, NSMutableSet, WCFinderListLoadingStateModel, NSMutableArray;
@protocol WCFinderWechatMentionViewModelDelegate;

@interface WCFinderWechatMentionViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSArray *readDataArray;
@property (retain, nonatomic) NSArray *unreadDataArray;
@property (retain, nonatomic) NSMutableSet *mentionIDSet;
@property (nonatomic) long long tabType;
@property (nonatomic) unsigned long long currenMaxReadId;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (nonatomic) BOOL hadFetchData;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) double cacheContainerWith;
@property (nonatomic) BOOL shouldShowNewTips;
@property (weak, nonatomic) id<WCFinderWechatMentionViewModelDelegate> delegate;

- (id)initWithDelegate:(id)a0 type:(long long)a1;
- (void)fetchNewestMention;
- (id)getMentionCellVMWithIndexPath:(id)a0;
- (id)getMentionArrayWithSection:(unsigned long long)a0;
- (unsigned long long)getMentionCount;
- (unsigned long long)getUnreadMentionCount;
- (BOOL)_showNewMentionTipsHeader:(long long)a0;
- (void)updateLastWechatMentionReadId;
- (void)fetchLocalMentions;
- (void)fetchLastMentionsWithMention;
- (void)appendDataArrayWithMentions:(id)a0;
- (id)mergeCellViewModel:(id)a0;
- (void)deleteMentionIndexPath:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)deleteMentionWithIndexPath:(id)a0;
- (long long)mentionType;
- (void).cxx_destruct;

@end
