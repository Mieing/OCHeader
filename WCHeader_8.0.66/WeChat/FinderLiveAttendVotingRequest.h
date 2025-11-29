@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveAttendVotingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSMutableArray *choiceId;
@property (retain, nonatomic) NSString *votingId;
@property (retain, nonatomic) NSData *liveCookies;

+ (void)initialize;

@end
