@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFansListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long lastFansId;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long onlyDuringLiveId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
