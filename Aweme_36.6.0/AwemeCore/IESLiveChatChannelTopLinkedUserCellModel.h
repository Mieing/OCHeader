@interface IESLiveChatChannelTopLinkedUserCellModel : IESLiveChatChannelTopUserCellModel

@property (nonatomic) BOOL isMute;
@property (nonatomic) long long volume;
@property (nonatomic) BOOL isLinked;

- (void)openUserPreview;
- (void)updateMuteState:(BOOL)a0;
- (void)bindLinkedUser:(id)a0;
- (void)updateVolume:(long long)a0;

@end
