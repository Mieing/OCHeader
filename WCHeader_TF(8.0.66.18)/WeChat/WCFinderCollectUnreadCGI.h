@class NSMutableArray;

@interface WCFinderCollectUnreadCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (nonatomic) int commentScene;

+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)a0;

- (id)initWithFinderUnreadItems:(id)a0 commentScene:(int)a1;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
