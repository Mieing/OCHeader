@class NSDictionary, NSString;

@interface AWESearchArticleRouteModel : NSObject

@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSString *highlightCommentId;
@property (copy, nonatomic) NSString *fromPage;
@property (nonatomic) BOOL isMusicPlaying;

- (void)parseParams:(id)a0;
- (void).cxx_destruct;

@end
