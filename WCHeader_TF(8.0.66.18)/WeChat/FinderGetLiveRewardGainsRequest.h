@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveRewardGainsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int rewardType;

+ (void)initialize;

@end
