@class NSString;

@interface FinderLiveAnchorStatInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long liveRoomHeatValue;
@property (retain, nonatomic) NSString *liveRoomHeatValueStr;
@property (nonatomic) unsigned long long participateMemberCount;
@property (nonatomic) unsigned int micMode;
@property (nonatomic) BOOL isBattling;

+ (void)initialize;

@end
