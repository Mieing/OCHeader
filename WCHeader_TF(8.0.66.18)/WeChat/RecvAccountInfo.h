@class NSString, TipsInfo, NSMutableArray;

@interface RecvAccountInfo : WXPBGeneratedMessage

@property (retain, nonatomic) TipsInfo *acctUsageTips;
@property (retain, nonatomic) NSString *noAvailabelAccountWording;
@property (retain, nonatomic) NSMutableArray *recvChannel;
@property (retain, nonatomic) NSString *listTitle;
@property (retain, nonatomic) NSMutableArray *recvChannelGroupList;
@property (nonatomic) unsigned int defaultRecvChannelType;
@property (retain, nonatomic) NSString *defaultRecvChannelEventId;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (void)initialize;

@end
