@class NSString, ConfigInfo;

@interface JoinRoomInfo : NSObject

@property (nonatomic) int audioType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *busiAppId;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) int timeStamp;
@property (nonatomic) int roomType;
@property (nonatomic) int maxWidth;
@property (nonatomic) int maxHeight;
@property (nonatomic) int videoRatio;
@property (nonatomic) int videoRotation;
@property (nonatomic) int maxDecodeFPS;
@property (nonatomic) int fixedVideoResolution;
@property (retain, nonatomic) ConfigInfo *configInfo;
@property (retain, nonatomic) NSString *privateData;
@property (retain, nonatomic) NSString *sessionKey;
@property (nonatomic) unsigned int lifespan;
@property (nonatomic) long long roomId;
@property (nonatomic) BOOL forceCellularNetwork;

- (id)init;
- (void).cxx_destruct;

@end
