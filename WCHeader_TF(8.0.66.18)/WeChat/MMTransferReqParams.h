@class NSString, NSDictionary, NSMutableDictionary;

@interface MMTransferReqParams : NSObject

@property (nonatomic) unsigned int jsApiControlBytesIndex;
@property (retain, nonatomic) NSString *h5AuthToken;
@property (nonatomic) BOOL disableRetryWhenFail;
@property (nonatomic) BOOL isWaitingH5auth;
@property (nonatomic) BOOL isReqRetry;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSString *cgiUri;
@property (retain, nonatomic) NSString *reqJson;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int method;
@property (retain, nonatomic) NSDictionary *reqHeader;
@property (retain, nonatomic) NSString *pubKeyToken;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL needVerifySignature;
@property (retain, nonatomic) NSString *debugIpName;
@property (retain, nonatomic) NSString *routeTag;
@property (nonatomic) BOOL reportCost;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) unsigned int transferType;
@property (copy, nonatomic) id /* block */ callback;

- (id)toTransferReq;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
