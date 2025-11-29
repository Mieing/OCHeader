@class GCLabelDynamicLayout;

@interface GCChatRoomVcLayout : GCDynamicLayoutProvider

@property (retain, nonatomic) GCLabelDynamicLayout *channelTitleLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *channelTitleNumberLayout;
@property (nonatomic) double spaceBelowChannelTitle;
@property (nonatomic) double spaceUpChatBtn;
@property (retain, nonatomic) GCLabelDynamicLayout *inputChannelTitleLayout;

- (id)init;
- (void).cxx_destruct;

@end
