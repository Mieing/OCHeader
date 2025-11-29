@class WCFinderPostTemplateCommentParams;

@interface WCFinderPostFollowFeedCommentCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderPostTemplateCommentParams *params;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)createPostRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
