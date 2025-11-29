@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetLotteryHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int getType;
@property (nonatomic) unsigned int supportMultiType;

+ (void)initialize;

@end
