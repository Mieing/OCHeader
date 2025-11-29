@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, FinderLiveClientStatus;

@interface FinderCreateLivePrepareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *micFinderUsername;
@property (nonatomic) unsigned long long micObjectId;
@property (nonatomic) unsigned long long micLiveId;
@property (retain, nonatomic) NSString *micObjectNonceId;
@property (retain, nonatomic) NSMutableArray *gestureList;
@property (nonatomic) unsigned long long gestureSdkVersion;
@property (nonatomic) unsigned int qrcodePosterStylesVersion;
@property (retain, nonatomic) NSData *hardwareInfo;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
