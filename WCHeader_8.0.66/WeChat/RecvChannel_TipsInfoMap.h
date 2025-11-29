@class TipsInfo;

@interface RecvChannel_TipsInfoMap : WXPBGeneratedMessage

@property (nonatomic) unsigned int recvChannelType;
@property (retain, nonatomic) TipsInfo *switchTips;

+ (void)initialize;

@end
