@class NSString, AWEURLModel;

@interface AWEIMSubscriptionMessageArticleModel : NSObject

@property (copy, nonatomic) NSString *articleId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWEURLModel *articleImg;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (void).cxx_destruct;

@end
