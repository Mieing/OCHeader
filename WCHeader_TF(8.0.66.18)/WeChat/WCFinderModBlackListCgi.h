@class NSString, NSData;

@interface WCFinderModBlackListCgi : WCFinderBaseCgi

@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long refObjectid;
@property (nonatomic) unsigned long long refCommentid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *fansid;
@property (retain, nonatomic) NSString *anchorUsername;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) unsigned long long refBulletCommentId;
@property (nonatomic) unsigned int opscene;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *mmlistenBypbuff;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
