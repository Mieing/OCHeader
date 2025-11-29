@class WCFinderLikeCGIParam;

@interface WCFinderLikeCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCFinderLikeCGIParam *param;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) int likeFlag;
@property (nonatomic) unsigned long long commentID;
@property (nonatomic) unsigned long long reportScene;

- (id)initFeedLikeCGIWithParam:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)initCommentLikeWithParam:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)likeRequestWithParam:(id)a0;
- (id)additionalUdfKVInfo;
- (id)initFriendsLikeCGIWith:(unsigned long long)a0 nonceID:(id)a1 reportScene:(int)a2 scene:(unsigned long long)a3 commentID:(unsigned long long)a4 finderUsername:(id)a5 likeUsername:(id)a6 isLike:(BOOL)a7 sessionBuffer:(id)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
