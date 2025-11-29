@class NSString;

@interface AWEIMSecondaryCommentDataController : AWEListDataController

@property (copy, nonatomic) NSString *noticeID;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isCommentMultiItemPolymeric;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (nonatomic) BOOL isCommentAIClonePolymeric;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getParams;
- (id)initWithNoticeID:(id)a0 isCommentMultiItemPolymeric:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
