@class MMLiveResourceFetcherTask;

@interface MMLiveResourceFetcherBatchResultItem : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) MMLiveResourceFetcherTask *task;

- (int)getCdnStatusCode;
- (void).cxx_destruct;

@end
