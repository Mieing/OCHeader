@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetMsgSessionIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int myAccountType;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *toFansId;
@property (nonatomic) unsigned long long toObjectId;
@property (nonatomic) unsigned long long toCommentId;
@property (retain, nonatomic) NSString *toLotteryId;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) BOOL supportAlias;
@property (nonatomic) unsigned long long toLikeId;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (retain, nonatomic) NSString *myAccountUsername;
@property (retain, nonatomic) NSString *toFavId;
@property (nonatomic) unsigned long long svrMentionId;
@property (retain, nonatomic) NSData *mmlistenBypassBuffer;
@property (nonatomic) unsigned long long toBulletCommentId;
@property (nonatomic) unsigned int userpageEnterType;
@property (nonatomic) unsigned int userpageLastCommentScene;
@property (nonatomic) unsigned long long userpageFromObjectId;

+ (void)initialize;

@end
