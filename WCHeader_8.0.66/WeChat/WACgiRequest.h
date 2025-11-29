@class NSObject, NSString, WXPBGeneratedMessage;

@interface WACgiRequest : NSObject

@property (retain, nonatomic) WXPBGeneratedMessage *pbRequest;
@property (nonatomic) unsigned int uiCgi;
@property (retain, nonatomic) NSObject *oUserData;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL needSpeedyFlag;
@property (nonatomic) BOOL dispatchSyncToMainThread;
@property (nonatomic) BOOL needKeepAlive;
@property (nonatomic) BOOL needCgiProfile;
@property (nonatomic) BOOL needRouteToServiceWhenWeakNet;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *respClass;

+ (id)createWithCgi:(unsigned int)a0 pbRequest:(id)a1;

- (id)toProtobufCGIWrap;
- (id)initWithCgi:(unsigned int)a0 pbRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
