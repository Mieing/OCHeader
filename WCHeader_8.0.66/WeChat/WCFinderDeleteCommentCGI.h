@class NSString, WCFinderComment;

@interface WCFinderDeleteCommentCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderComment *comment;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) unsigned long long rootCommentID;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int commentScene;

- (id)initWithComment:(id)a0 tid:(id)a1 rootCommentID:(unsigned long long)a2 scene:(unsigned long long)a3 sessionBuffer:(id)a4 commentScene:(int)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
