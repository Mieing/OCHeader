@class AWEAwemeModel;
@protocol AWEHttpTask;

@interface AWESearchAIGCDownloadResultManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)fetchSearchAIGCDownloadResultWithSearchIDsString:(id)a0 dict:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
