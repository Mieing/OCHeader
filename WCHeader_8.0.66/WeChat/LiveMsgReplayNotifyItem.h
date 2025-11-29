@class FinderWindowProductInfo_ProductReplayInfo;

@interface LiveMsgReplayNotifyItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int finderLiveSyncExtraInfoCmdid;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *productReplayInfo;

+ (void)initialize;

@end
