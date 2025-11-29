@class NSString, AWEAwemeModel;

@interface AWESearchFeedArticleViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;

- (void)trackArticleLoadStatus:(id)a0;
- (void)fetchArticleWithCompletion:(id /* block */)a0;
- (void)trackArticleLoadDuration:(double)a0;
- (void).cxx_destruct;

@end
