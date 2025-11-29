@class NSString, HTSLiveLinkmicGameInfo;

@interface HTSLiveLinkmicGameBarrageRtcRoomCreateContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicGameInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (copy, nonatomic) NSString *cdGamePublicStreamId;

+ (id)descriptor;

@end
