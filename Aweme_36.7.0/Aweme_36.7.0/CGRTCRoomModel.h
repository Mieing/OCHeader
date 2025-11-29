@class NSString;

@interface CGRTCRoomModel : NSObject

@property (nonatomic) long long engineType;
@property (nonatomic) BOOL enableRTCMulti;
@property (nonatomic) BOOL muteAudioPlayback;
@property (nonatomic) BOOL userVisibility;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcABLabel;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *clientUserId;
@property (copy, nonatomic) NSString *remoteUserId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *podId;
@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *preJoinRoomData;
@property (nonatomic) BOOL useSeiPB;
@property (nonatomic) BOOL useVeGame;
@property (copy, nonatomic) NSString *veGameGameId;
@property (copy, nonatomic) NSString *veGameExtra;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL enableRTCExternalVideoRender;
@property (nonatomic) BOOL isMultiInstance;

- (void).cxx_destruct;

@end
