@class TipsInfo, NSString, RecvChannel_SubTitleInfo, RecvChannelDynamicColor, SubRecvChannelInfo, RecvChannelTextInfo, NSMutableArray;

@interface RecvChannel : WXPBGeneratedMessage

@property (nonatomic) unsigned int recvChannelType;
@property (retain, nonatomic) NSString *recvChannelName;
@property (retain, nonatomic) NSString *recvChannelLogo;
@property (nonatomic) unsigned int recvChannelAvailState;
@property (nonatomic) unsigned int recvChannelUnavailReason;
@property (retain, nonatomic) NSString *firstChooseWording;
@property (retain, nonatomic) RecvChannelTextInfo *jumpRemindInfo;
@property (retain, nonatomic) TipsInfo *unavailTips;
@property (retain, nonatomic) RecvChannel_SubTitleInfo *recvChannelSubTitle;
@property (retain, nonatomic) NSString *recvChannelNameNote;
@property (retain, nonatomic) NSMutableArray *switchAvailchannelTips;
@property (retain, nonatomic) TipsInfo *onceUsageTips;
@property (retain, nonatomic) NSString *firstChooseGuide;
@property (retain, nonatomic) NSString *recvChannelNameIcon;
@property (nonatomic) unsigned int chooseGuideDisplayTimes;
@property (retain, nonatomic) RecvChannelDynamicColor *dynamicBgColor;
@property (retain, nonatomic) NSString *floatButton;
@property (retain, nonatomic) SubRecvChannelInfo *subRecvChannelInfo;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (void)initialize;

@end
