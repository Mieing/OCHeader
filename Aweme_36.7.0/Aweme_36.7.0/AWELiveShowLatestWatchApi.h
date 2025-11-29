@class NSString;

@interface AWELiveShowLatestWatchApi : HTSLiveApi

@property (copy, nonatomic) NSString *userId;

- (void)fetchLatestWatchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUserId:(id)a0;

@end
