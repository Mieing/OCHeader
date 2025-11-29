@class WCFinderDataItem, NSString, NSData;

@interface WCFinderPostLiveLikeCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long likeCount;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long commentSeq;
@property (copy, nonatomic) NSString *clientMsgId;
@property (nonatomic) int msgType;
@property (nonatomic) long long likeScene;
@property (nonatomic) long long opType;
@property (nonatomic) long long likeSource;
@property (nonatomic) unsigned long long accumulateLikeCount;

- (id)initWithFinderTaskId:(id)a0 likeCount:(unsigned long long)a1 liveCookies:(id)a2 likeScene:(long long)a3 opType:(long long)a4 likeSource:(long long)a5 accumulateLikeCount:(unsigned long long)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (id)initWithFinderTaskId:(id)a0 liveCookies:(id)a1 commentSeq:(unsigned long long)a2 clientMsgId:(id)a3 msgType:(unsigned int)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithFeedStreamFriendLike:(id)a0 isLike:(BOOL)a1 sessionBuffer:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)createCommentLikeRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
