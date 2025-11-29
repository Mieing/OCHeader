@class NSString;

@interface WCFinderGetClubInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *chatroomId;
@property (nonatomic) int role;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithChatroom:(id)a0 role:(int)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end
