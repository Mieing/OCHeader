@class NSString, NSDictionary, ByteRTCEngine, LMEngine, ByteRTCRoom;

@interface VeCoreConfigObject : NSObject

@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *roundId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *podUserId;
@property (copy, nonatomic) NSString *podId;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *planId;
@property (copy, nonatomic) NSString *mediaAppId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *customGameId;
@property (copy, nonatomic) NSString *customUUID;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *reservedId;
@property (copy, nonatomic) NSString *podEip;
@property (nonatomic) long long podPort;
@property (nonatomic) long long clarityId;
@property (nonatomic) double podWidth;
@property (nonatomic) double podHeight;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (copy, nonatomic) NSString *rtcExpectedIdc;
@property (copy, nonatomic) NSString *vendorId;
@property (copy, nonatomic) NSString *gameRotation;
@property (copy, nonatomic) NSString *mediaProvider;
@property (nonatomic) unsigned long long gameType;
@property (nonatomic) BOOL rtcMultiCreate;
@property (nonatomic) BOOL externalRendering;
@property (copy, nonatomic) NSDictionary *rtcCreateParameters;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (weak, nonatomic) LMEngine *llamaEngine;
@property (copy, nonatomic) NSString *llamaAbLabel;
@property (weak, nonatomic) ByteRTCEngine *rtcEngine;
@property (weak, nonatomic) ByteRTCRoom *rtcRoom;
@property (nonatomic) BOOL SEIEnable;

- (BOOL)checkParams;
- (id)initWithDataDict:(id)a0;
- (BOOL)isCGInner;
- (void).cxx_destruct;

@end
