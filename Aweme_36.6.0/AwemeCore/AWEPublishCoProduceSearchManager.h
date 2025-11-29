@class NSArray, NSMutableArray, NSString;
@protocol AWEHttpTask;

@interface AWEPublishCoProduceSearchManager : NSObject

@property (retain, nonatomic) NSMutableArray *userArray;
@property (copy, nonatomic) NSArray *presentedUserArrayString;
@property (weak, nonatomic) id<AWEHttpTask> currentTask;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSArray *coProduceUserList;
@property (retain, nonatomic) NSMutableArray *presentedUserArray;

+ (BOOL)shouldCoproduceSerachViewUseFullPageStyle;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)isUserSelected:(id)a0;
- (void)fetchSearchUserListWithQuery:(id)a0 presentedUserArray:(id)a1 completion:(id /* block */)a2;
- (void)fetchSearchParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchSearchSugWithQuery:(id)a0 presentedUserArray:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
