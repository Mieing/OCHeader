@class IESLiveInteractionLayout;

@interface IESLiveMultiKTVStreamLayout : IESLiveMultiAudioStreamLayout

@property (retain, nonatomic) IESLiveInteractionLayout *layout;

- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)updateLayoutOfExtraPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)seiRegionFrom:(id)a0 session:(id)a1 userService:(id)a2;
- (id)rtcSubRoomIdWithExtInfo:(id)a0;
- (void).cxx_destruct;

@end
