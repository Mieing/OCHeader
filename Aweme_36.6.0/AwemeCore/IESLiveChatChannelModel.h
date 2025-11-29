@class RoomChannelInfo;

@interface IESLiveChatChannelModel : IESLivePublicScreenInfoModel

@property (retain, nonatomic) RoomChannelInfo *channelInfo;

- (id)initWithChannelInfo:(id)a0;
- (void)updateRoleWithMessage:(id)a0;
- (void)mergeDataFromStateMessage:(id)a0;
- (void).cxx_destruct;

@end
