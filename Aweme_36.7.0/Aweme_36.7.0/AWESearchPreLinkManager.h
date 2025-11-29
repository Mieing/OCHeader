@interface AWESearchPreLinkManager : NSObject

@property (nonatomic) double timeout;
@property (nonatomic) double lastPreLinkTime;

+ (id)shareInstance;

- (void)registerTimeOut:(double)a0;
- (void)triggerPreLink;
- (id)searchPreLinkUrls;
- (void)preLinkWithUrl:(id)a0;

@end
