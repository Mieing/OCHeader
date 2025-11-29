@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveOnlineMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *liveContactsLastBuffer;
@property (nonatomic) BOOL clearRecentRewardHistory;
@property (retain, nonatomic) NSString *micId;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (nonatomic) unsigned int businessFilterScene;
@property (retain, nonatomic) NSData *getLiveOnlineMemberBuf;

+ (void)initialize;

@end
