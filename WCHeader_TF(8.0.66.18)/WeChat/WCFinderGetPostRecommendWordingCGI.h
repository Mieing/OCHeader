@class NSData, NSString, FinderGetPostRecommendTitleContext;

@interface WCFinderGetPostRecommendWordingCGI : WCFinderBaseCgi

@property (nonatomic) int scene;
@property (copy, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSData *seqBuffer;
@property (copy, nonatomic) FinderGetPostRecommendTitleContext *titleContext;
@property (copy, nonatomic) NSString *finderUserName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithScene:(int)a0 lastBuffer:(id)a1 seqBuffer:(id)a2 titleContext:(id)a3 finderUserName:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
