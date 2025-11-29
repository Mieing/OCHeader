@interface WCFinderGetContactListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ respSuccessBlock;
@property (nonatomic) unsigned long long requestContactCount;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long fromScene;

- (id)init;
- (id)initWithReq:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)initWithUsername:(id)a0 relationInfo:(id)a1 finderUsername:(id)a2 commentScene:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithUsernameArray:(id)a0 contactType:(int)a1 finderUsername:(id)a2 commentScene:(int)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (id)initWithAuthorUsernameArray:(id)a0 commentScene:(int)a1;
- (id)initWithComment:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithFansInfo:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithContact:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithFinderUsername:(id)a0 msgInfoArrary:(id)a1 commentScene:(int)a2;
- (id)initWithLocalSearchUsernameArray:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithStrangerInfoArray:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithFinderContactCommentLikeInfoArray:(id)a0 finderUsername:(id)a1 commentScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (id)initWithUsername:(id)a0 relationInfo:(id)a1 finderUsername:(id)a2 commentScene:(int)a3 scene:(unsigned int)a4 successBlock:(id /* block */)a5;
- (void)setRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
