@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, FinderActivateLiveMicRequest_MicInfo;

@interface FinderActivateLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *liveMicId;
@property (nonatomic) unsigned int micType;
@property (retain, nonatomic) NSMutableArray *micInfoList;
@property (retain, nonatomic) NSMutableArray *selfAudienceMicInfoList;
@property (retain, nonatomic) NSMutableArray *otherLiveMicInfoList;
@property (retain, nonatomic) NSMutableArray *unrecognizedAudienceMicInfoList;
@property (nonatomic) unsigned int reportScene;
@property (nonatomic) unsigned long long clientTimestampMs;
@property (retain, nonatomic) FinderActivateLiveMicRequest_MicInfo *selfAnchorMicInfo;

+ (void)initialize;

@end
