@class NSMutableArray;
@protocol AWEHttpTask;

@interface AWEVoteStickerManager : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) id<AWEHttpTask> currentTask;
@property (retain, nonatomic) NSMutableArray *voteUserList;
@property (nonatomic) BOOL hasMore;

+ (void)selectOption:(long long)a0 ofVote:(long long)a1 completion:(id /* block */)a2;

- (void)clearVoteUserList;
- (void)refreshVoteUserListWithVoteID:(long long)a0 optionID:(long long)a1 completion:(id /* block */)a2;
- (void)loadMoreVoteUserListWithVoteID:(long long)a0 optionID:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
