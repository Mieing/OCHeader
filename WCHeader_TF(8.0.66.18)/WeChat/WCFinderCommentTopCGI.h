@class NSString, WCFinderComment;

@interface WCFinderCommentTopCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderComment *comment;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) NSString *tid;

- (id)initWithComment:(id)a0 tid:(id)a1 userName:(id)a2 scene:(unsigned long long)a3 commentScene:(int)a4 sessionBuffer:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
