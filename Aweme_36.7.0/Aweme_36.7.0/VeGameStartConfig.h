@class NSString, NSDictionary, ByteRTCEngine, LMEngine, ByteRTCRoom;

@interface VeGameStartConfig : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *podId;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *podUserId;
@property (copy, nonatomic) NSString *mediaAppId;
@property (copy, nonatomic) NSString *mediaToken;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) double streamWidth;
@property (nonatomic) double streamHeight;
@property (copy, nonatomic) NSString *clientUserId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (nonatomic) BOOL rtcMultiCreate;
@property (nonatomic) BOOL externalRendering;
@property (copy, nonatomic) NSDictionary *rtcCreateParameters;
@property (copy, nonatomic) NSString *extraInfo;
@property (weak, nonatomic) LMEngine *llamaEngine;
@property (copy, nonatomic) NSString *llamaAbLabel;
@property (weak, nonatomic) ByteRTCEngine *rtcEngine;
@property (weak, nonatomic) ByteRTCRoom *rtcRoom;
@property (nonatomic) BOOL SEIEnable;

- (void).cxx_destruct;

@end
