@class NSString, NSNumber, NSError;

@interface IESLiveLinkmicLinkerModel : NSObject

@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSString *roomOwnerLinkmicID;
@property (copy, nonatomic) NSString *linkerSessionId;
@property (retain, nonatomic) NSNumber *preJoinRTC;
@property (retain, nonatomic) NSNumber *invisibleWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeAudioWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeVideoWhenJoinRTC;
@property (retain, nonatomic) NSNumber *stopPlayerWhenSilentJoinRTC;
@property (retain, nonatomic) NSNumber *muteLocalAudioWhenJoinRTC;
@property (copy, nonatomic) NSString *remoteLinkerSessionId;
@property (retain, nonatomic) NSNumber *linkerMediaType;
@property (retain, nonatomic) NSNumber *permitMsgWithJoinChannel;
@property (nonatomic) BOOL hasInviteLinkmicInfo;
@property (nonatomic) BOOL hasPermitLinkmicInfo;
@property (nonatomic) unsigned long long joinChannelResult;
@property (retain, nonatomic) NSError *joinChannelError;
@property (nonatomic) unsigned long long rtcStartResult;
@property (retain, nonatomic) NSError *rtcStartError;
@property (readonly, copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (retain, nonatomic) NSNumber *permitMsgJoinRoomUnpublish;

- (void)updateLinkmicID:(id)a0 andChannelID:(id)a1;
- (void)updateLinkerSessionID:(id)a0 remoteLinkerSessionID:(id)a1;
- (void)updateLinkerMeidaType:(id)a0;
- (void)updateInvisibleWhenJoinRTC:(id)a0;
- (void)updateWithSilentEnterRTCInfo:(id)a0;
- (BOOL)serverJoinChannelSuccess;
- (void).cxx_destruct;
- (void)clean;

@end
