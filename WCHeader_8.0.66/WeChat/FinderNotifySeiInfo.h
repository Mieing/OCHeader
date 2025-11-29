@class NSData, FinderNotifySeiInfo_NotifySeatInfo;

@interface FinderNotifySeiInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int notifyBitFlag;
@property (nonatomic) unsigned long long clientTimestampMs;
@property (retain, nonatomic) FinderNotifySeiInfo_NotifySeatInfo *notifySeatInfo;
@property (retain, nonatomic) NSData *seiAnchorInfo;

+ (void)initialize;

@end
