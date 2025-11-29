@class NSDictionary, AWEAwemeModel;

@interface AWEShowEntertainmentCommentDataController : NSObject

@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (id)initWithAwemeModel:(id)a0;
- (id)initWithAwemeModel:(id)a0 logExtra:(id)a1;
- (id)getEntertainmentCommentTabRequestParams;
- (void)requestEntertainmentCommentTabData:(id /* block */)a0;
- (void).cxx_destruct;

@end
