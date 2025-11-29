@class NSArray, NSString, IESLiveCommentMentionApi;

@interface IESLiveCommentMentionListViewModel : NSObject

@property (copy, nonatomic) NSArray *loadingList;
@property (copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *nonSearchUserListCache;
@property (retain, nonatomic) IESLiveCommentMentionApi *api;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) double lastSentenceChangeTime;
@property (nonatomic) double mentionREQTimeRate;
@property (copy, nonatomic) NSString *currentReqId;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSArray *mentionList;

- (void)selectUsers:(id)a0;
- (void)fetchMentionListWithText:(id)a0 skipReqRate:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackMentionListShowWithItemList;
- (void)deselectUsers:(id)a0;
- (void)trackMentionUserClickWithItem:(id)a0 selected:(BOOL)a1;
- (void)trackMentionListSlide;
- (id)refreshReqId;
- (void)realFetchChatMentionListWithText:(id)a0 completion:(id /* block */)a1;
- (void)handleMentionListResult:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
