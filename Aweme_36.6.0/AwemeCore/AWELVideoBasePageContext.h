@class NSString, UIViewController, NSDictionary;

@interface AWELVideoBasePageContext : AWEPageContext

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (copy, nonatomic) NSString *homepageType;
@property (copy, nonatomic) NSDictionary *trackCommonParams;

- (void).cxx_destruct;

@end
