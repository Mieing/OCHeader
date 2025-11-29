@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveRewardFreeGiftRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSMutableArray *freeGiftIds;
@property (nonatomic) unsigned int rewardScene;

+ (void)initialize;

@end
