@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveBoxId;

@interface FinderGetFriendBoxLiveMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
